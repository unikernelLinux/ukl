
- Starting with the https://github.com/unikernelLinux/ukl project.
    - I started by just following the README:
        `git clone https://github.com/unikernelLinux/ukl`
        `cd ukl`
        `git submodule update --init`
        `autoreconf -i`
        `./configure --with-program=hello`
        `make -j8`

    - The submodule update command took time.
    - The make command also took time. I thought that it was building out an entire kernel with every module option which would've taken for ages (Kind of how in my kernel workshop you take the config files from the current machine so you don't build every module ever.)
        - Anyway, that's not the case, it's because the make command is building the kernel, libgcc, glibc, gcc and the target application (i.e. hello-world).
    
    - Then the
        `make boot`
    command wouldn't work and I had to fix it. I needed to enable nested VT-X on my hypervisor (Oracle VirtualBox) which is basically allowing virtualisation inside a VM. VIRTUALCEPTION.

    - Then
        `make boot`
    worked, and I was able to see the message of "hello-world.c" from running the unikernel within QEMU.

    - Then I made a change to hello-world.c and
        `make clean -C linux`
        `make clean` from with .../hello
    to see those changes in the unikernel.
    - Files are persistent through boot cycles, but I am not sure about rebuilds.
    - Files are persistent through rebuild cycles. Idk what this means but I suppose it's because you're just creating another extraversion. 
    - In fact, I'm going to edit the Linux source code to change the EXTRAVERSION line and see what happens. I expect it to rebuild the entire linux kernel, but not the glibc etc. files.
    - `Linux 5.14.0-rc7-JonnyBox+ x86_64`
    - So what I am doing is similar to my kernel workshop in the sense that I can make changes to the Linux source and rebuild it.
    - I just want to know if there is a way to invoke the hello-world program again. From my reading I would say no, it is always running. I will ask Eric.
    - Productive day.

## Wednesday 22nd June
- I had a meeting with Richard Jones and the rest of the UKL group.
    - I don't know what we spoke about, just general things about going forward.
- I met with Eric Munson. I am going to be working on V8 engine by getting it to work in the UKL environment.
    - https://v8.dev/docs

## Thursday 23rd June
- Started here: https://v8.dev/docs
    - I did all of this on the VM adjacent to the UKL repo.
    - `git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git`
    - `export PATH=/home/eddybox/depot_tools:$PATH`
    - `mkdir v8`
    - `cd v8`
    - `fetch v8`
    - This creates another v8 directory within the v8 directory, so 
    `pwd`
    shows /home/eddybox/v8/v8.
    - `git config branch.autosetupmerge always`
    - `git config branch.autosetuprebase always`
    - `git new-branch experiment-01`
    - `sudo dnf install redhat-lsb-core`
    - This command threw an "ERROR: The only supported distros are" and then listed Ubuntu distros. `./build/install-build-deps.sh`. Following commands still ran ok.
    - `tools/dev/gm.py x64.release`
    - "Done! - V8 compilation finished successfully."
    - Added `alias gm=/home/eddybox/v8/v8/tools/dev/gm.py` to .bashrc.
    - `gn args out/foo` opens editor to give arguments for the thing that creates the build files. I had to set `use_goma=false`
    - `gn args out/foo --list` lists all possible arguments the build files can operate with.
    - `ninja -C out/foo` compiles the build files of v8. [3228/3228]
    - `tools/run-tests.py --outdir out/foo`
    - I guess it is time to start looking at its code and how to write applications with it.

    - Started with a hello-world. Problem with this stuff (so far) is that it takes a long time to compile the code.
    - Also their hello-world doesn't work?

- So I got through a bunch of the hello-world documentation, but it doesn't work so that will be tomorrow's job.

## Friday 24th June
- Started by `rm -fr` and starting again on the "Hello world" example. Didn't work.
- `rm -rf`'ed the folder again and now I'm going to immediately 
    `git checkout refs/tags/7.1.11 -b sample -t`
    to try and make it work, as suggested here: https://v8.dev/docs/embed.
    - `tools/dev/v8gen.py x64.release.sample`
        - Error in v8gen.py file.
        - Lots of errors in v8gen.py. I'm not sure if I want to struggle through fixing it.
- Tried again, still getting problems from `/include/v8-maybe.h`. I'll see Eric on Monday.
    - Changed the `-std=c++14` flag `-std=c++17`. Seemed to change some of the errors.
    - Ok note to self, `rm -rf` then follow the hello world example but change that flag.
    - Ok, got compilation.
    `tools/dev/v8gen.py x64.release.sample`
    `ninja -C out.gn/x64.release.sample v8_monolith`
    `g++ -I. -Iinclude samples/hello-world.cc -o hello_world -lv8_monolith -Lout.gn/x64.release.sample/obj/ -pthread -std=c++17 -DV8_COMPRESS_POINTERS`
    `./hello_world`
    - Granted, it exits with Aborted (core dumped), but it's better than compilation errors. It was changing `-std=c++14` to `-std=c++17` that did the trick.
    - "Embedder-vs-V8 build configuration mismatch. On embedder side sandbox is DISABLED while on V8 side it's ENABLED."
    - Productive day, new problems to solve :). Idk if my colleagues will see it this way because changing a flag isn't much...

## Monday 27th June
- Started the day by looking into signing my kernel modules for VirtualBox using mokutils.
    - I don't think that mokutils works on my machine so this means that at some point I'm going to be TOTALLY fucked when I accidentally update my kernel to a point where VirtualBox no longer works...
- "Embedder-vs-V8 build configuration mismatch. On embedder side sandbox is DISABLED while on V8 side it's ENABLED."
    - Looking at solving this today. I think I might need to rebuild the v8 engine with the flag "-v8_enable_sandbox". I'm not sure if it's an argument for compilation or for building so that is the current mystery.
    `g++ -I. -Iinclude samples/hello-world.cc -o hello_world -lv8_monolith -Lout.gn/x64.release.sample/obj/ -pthread -std=c++17 -DV8_COMPRESS_POINTERS -DV8_ENABLE_SANDBOX`
    - Note the new `-DV8_ENABLE_SANDBOX` flag at the end of the compilation command. This finally made the program run :)
    `Hello, World!`
    `3 + 4 = 7`
    - So that's cool.
- Next task, getting the Hello World in UKL.
    - I will start by looking at the Redis and Secrecy ports to UKL and trying to do something similar. I imagine the steps are as follows. 
    1. Build the v8 engine within the UKL kernel.
        - I am more scared for this step, because I'm not really sure how building the v8 engine into the kernel looks. Getting all of the dependencies right is going to be a nightmare I think.
        - Also, I cannot make changes to the UKL once it is running, I will need to have everything correct by the time I hit `make boot` on the UKL.
    2. Build the UKL with `./configure --with-program=hello_world_v8`.

- Compiling v8 statically.
    - So Ali advised that the first thing I do is compile the v8 engine "Hello_World" statically. It's so that the UKL doesn't have to load things in at runtime. This is where a lot of the performance improvements come from.
    - The command ldd "prints shared object dependencies".
    `ldd ./hello_world` 
    and tells me what libraries are loaded at runtime.
    - I will be editing the long example command that v8 provides to compile it statically.
    `g++ -I. -Iinclude samples/hello-world.cc -o hello_world -lv8_monolith -Lout.gn/x64.release.sample/obj/ -pthread -std=c++17 -DV8_COMPRESS_POINTERS -DV8_ENABLE_SANDBOX -static`
    - Command is too long to type into the command line. Time to start a Makefile.
    - I doubt that it will be as simple as adding `-static` to the Makefile but I shall give that a go first.
        - It did not work.
- Productive day :)

## Taco Tuesday 28th June
- Today I am trying to compile the v8/hello_world example statically. This is so that we don't dynamically load the libraries in at runtime in the UKL.
    - If I run,
    `ldd ./hello_world`
    I get,
    `linux-vdso.so.1 (0x00007fff3444c000)`
    `libstdc++.so.6 => /lib64/libstdc++.so.6 (0x00007f0f03ec9000)`
    `libm.so.6 => /lib64/libm.so.6 (0x00007f0f03deb000)`
    `libgcc_s.so.1 => /lib64/libgcc_s.so.1 (0x00007f0f03dcb000)`
    `libc.so.6 => /lib64/libc.so.6 (0x00007f0f03bca000)`
    `/lib64/ld-linux-x86-64.so.2 (0x00007f0f0410f000)`
    - These are all the libraries that are loaded at runtime. I don't need to worry about `linux-vdso`, `lib64/ld-linux`, and then the rest I don't need to worry about building statically because UKL has that covered. Or something like that.
    - What I'm struggling to do though, is incoporate the `-static` flag. I keep getting
    `/usr/bin/ld: cannot find -libc`
    `/usr/bin/ld: cannot find -lstdc++`
    `/usr/bin/ld: cannot find -lstdc++`

    - Anyway
    - The problem with my Makefile was that I was trying to link the wrong libraries, `libm`, `libc`, `libgcc` and `libstd=c++17`. What I should have been doing was finding the static library of `lv8_monolith`.
    - Eric showed me `find . -name *v8_monolith*` would determine if `v8_monolith` had a static library anywhere (.a) being an archive file.
    - So in the Makefile I added the line, 
    `/home/eddybox/v8/v8/out.gn/x64.release.sample/obj/libv8_monolith.a` under `LDFLAGS`.
    - So now, 
    `make`
    compiles `./hello_world` statically.
    - `ldd ./hello_world` returns `not a dynamic executable`.
    - :D
- Line 48-68 in the Redis example will lend hints on how to do things. I'm still working out what things.
    - One part of it is how to checkout v8 from its repo, which is definitely going to be hard, because I'm going to have to pull in someone's git email address from their config file.
    - I'm using the secrecy example.
    - This is where a lot of the heavy lifting is going to be. And where things are going to be difficult.
        - That pizza break really destroyed my concentration.
    - Looking at the v8 docs, I think I should go through the whole process of making hello-world work but from their github or chromium repo.


## Wednesday 29th June
- UKL meeting. Orran and Richard seemed excited about what I'm working on. Hopefully I'm able to get the v8 hello-world working by next time I see them.
    - At least all these projects have cool names?
- Categoric steps for the Makefile.
    - `git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git`
    - `mkdir v8_fetch`
    - `cd v8_fetch`
    - `fetch v8`
    - `cd v8`
    - `export PATH=/home/eddybox/depot_tools:$PATH`
    - `git checkout refs/tags/7.1.11 -b sample -t`
    -  `gclient sync`
    - **** my life!!!!!!
    - So this isn't working. I'm going to have to use the script that Google provides and figure out how to stick that in the Makefile. !
- Categoric steps that should work. If they don't something changed over-night and I'm screwed.
    - `git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git`
    - `mkdir v8_google`
    - `cd v8_google`
    `eval 'set +o history' 2>/dev/null || setopt HIST_IGNORE_SPACE 2>/dev/null`
    `touch ~/.gitcookies`
    `chmod 0600 ~/.gitcookies`

    `git config --global http.cookiefile ~/.gitcookies`

    `tr , \\t <<\__END__ >>~/.gitcookies`
    `chromium.googlesource.com,FALSE,/,TRUE,2147483647,o,git-jacc.bu.edu=1//0d69CyrG9hog4CgYIARAAGA0SNwF-L9IrRfsMas56PLDiGoxPd_Dsbke-GRyo32H9uqrH-eoigZ7d5i4iKByFCJ6mCBg-MfiqJco`
    `chromium-review.googlesource.com,FALSE,/,TRUE,2147483647,o,git-jacc.bu.edu=1//` `0d69CyrG9hog4CgYIARAAGA0SNwF-L9IrRfsMas56PLDiGoxPd_Dsbke-GRyo32H9uqrH-eoigZ7d5i4iKByFCJ6mCBg-MfiqJco`
    `__END__`
    `eval 'set -o history' 2>/dev/null || unsetopt HIST_IGNORE_SPACE 2>/dev/null`
    - `export PATH=/home/eddybox/depot_tools:$PATH`
    - `fetch v8`
    - `cd v8`
    - 
    - `git checkout refs/tags/7.1.11 -b sample -t`
    - `gclient sync`
    - 
- This is ridiculous.
    - `mkdir v8_2`
    - `cd v8_2`
    - `git clone https://chromium.googlesource.com/chromium/tools/depot_tools.git`
    - `export PATH=/home/eddybox/v8_2/depot_tools`
    - `fetch v8`
    - `cd v8`
    - `gclient sync -D`
    - `tools/dev/v8gen.py x64.release.sample` -> `gn gen out.gn/x64.release.sample --args='dcheck_always_on=false is_component_build=false is_debug=false target_cpu="x64" use_custom_libcxx=false v8_monolithic=true v8_use_external_startup_data=false is_clang=false use_sysroot=false'` 
    - `ninja -C out.gn/x64.release.sample v8_monolith`
    - `make`
    - `ldd ./hello-world`
    - `./hello-world`
    - What a stupid day. So I guess the change was NOT using the tested sample for hello-world, and using the main branch. DAY. WASTED. 
- It wasn't a total waste, but it was very annoying. I guess I figured some stuff out and next I'm going to be putting stuff in the Makefile.am file, but it's a very daunting task so maybe I'm putting it off. 
    - I can't believe that the people over at v8 don't keep their documentation up-to-date. How are people meant to use it if nothing works?

## Thursday 30th June
- Started by doing some investigating on how the automake tools work.
    - When pulled, the UKL repo just has "Makefile.am"
    - The command `autoreconf -i` creates the "Makefile.in" file.
    - The command `./configure` creates the "Makefile" file to make the UKL with an application loaded into kernel space.
    - So my "Makefile.am" needs to react to `autoreconf -i` and `./configure` to do stuff.
- It's going well, my Makefile gets as far as producing the `out.gn/x64.release.sample/obj/libv8_monolith.a`
    - This means that I can run my other Makefile to produce an executable.
    - Or if I change the Makefile target from `hello-world` -> `hello-world.o` to produce an object file.
- Interesting working on this. 
    - Slowly working through it, can't rename hello-world.cc without affecting the ninja automake. 
- I'm slowly making progress. 
    - I didn't know that making a clone of v8 was an option so that I can control it, was an option, so I'll do that.
- Actually learning so that's good. And also making progress :).

## Friday 1st July
- Started by verifying Makefile gets things all the way to producing the `out.gn/x64.release.sample/obj/libv8_monolith.a` file, and then proceeds to call the Makefile for the v8.o file.
    - By putting `$(PATH)`, the export command works.
- AH YES. CODEBASES HAVE CHANGED OVER NIGHT AND NOW NOTHING WORKS AGAIN. THIS TIME IT APPEARS TO BE CLANG/LLVM.


- Changed from compiling with clang to compiling with gcc.
    - This required adding `is_clang=false use_sysroot=false` to the args in the `out.gn` folder, so it looks like this.
    `gn gen out.gn/x64.release.sample --args='dcheck_always_on=false is_component_build=false is_debug=false target_cpu="x64" use_custom_libcxx=false v8_monolithic=true v8_use_external_startup_data=false is_clang=false use_sysroot=false'` v8_enable_atomic_object_field_writes=false v8_enable_concurrent_marking=false'`
    
    - I did need to `sudo dnf install glib2-devel libatomic`
    To get over another error.

    - This is because we don't know how to deal with clang. No more clang errors that popped up this morning. Now new and exciting errors, like `LINK ./bytecode_builtins_list_generator FAILED :bytecode_builtins_list_generator` :D :D.
        - Fixed with `sudo dnf install libatomic` (It's documented above so that I can add it to the Makefile).
        - It's only because of the UKL being made by an automake tool that we need to make this all Makefile friendly.
    
- Sad news. I have found errors that are internal to the v8 code base. 
    - This was through compiling with g++. I was producing internal compiler errors that there isn't a whole lot I can do about it.
    - It's annoying to have regressed from yesterday. Maybe things will work on Tuesday but for now it's all dead.

- I'm going to give it a go on a new Ubuntu 22 machine but otherwise this is dead.
    - It worked on Ubuntu.

- So thinking about what Ali said, it's interesting that Fedora and Ubuntu would differ in whether the flag `-no-pie` is default
    - It is interesting because PIE = Position Independent Executable, which is a prerequisite for ASLR = Address Space Layout Randomisation. So someone isn't defaulting security settings?
    - It could be that Ali is wrong and this isn't the thing causing INTERNAL COMPILATION ERRORS. 
    - God knows how to turn it on/off within the v8 build process.
    - Tried to hello-world on my host F36 but it failed here too. We'll see what happens on the Ceph call.
- Really tough day.

## Wednesday 6th July
- Command line script tool to log every output to stdout.
- https://koji.fedoraproject.org/koji/buildinfo?buildID=1957093
- Started with UKL standup. 
 
    - Uli said I need to checkout the Fedora version of v8, and use rpmbuild to get it going.
    - Ali said that since it's an intermittent problem, there's probably something going wrong somewhere else that we don't understand. (I don't understand).
- From the meeting, we are going to try and take the version of v8 that is shipped with nodejs because that would have to work with Fedora 36.
    - This entails starting here: `https://koji.fedoraproject.org/koji/buildinfo?buildID=1957093`
    - This directs us the source. `https://src.fedoraproject.org/rpms/nodejs.git`
    - `common.gypi` shows us that nodejs is running`v8 10.2`. So we can go to `https://chromium.googlesource.com/v8/v8.git` and look at the tags. 
    - The highest number of `v8 10.2` is `10.2.154`, so I'm going to fetch v8 from chromium and then do a `git checkout refs/tags/10.2.154 -b sample -t`. Since this is the most recent version shipped with nodejs, it should work on Fedora 36.
    - So the tag 10.2.154 does exist so good start. I don't have a lot of faith in chromium sources right now so anything going well is a small victory.

- [1301/1821] CXX obj/v8_base_witho...t_compiler/builtins-arraybuffer.o
FAILED: obj/v8_base_without_compiler/builtins-arraybuffer.o
    - Deleting `-Werror` in `v8_base_without_compiler.ninja` to see if that allows us to blast through the errors. This file is in `v8/v8/out.gn/x64.release.sample/obj`
    - This successfully(?) built the v8 engine.
    [716/716] AR obj/libv8_monolith.a

- Next steps
    - Automate the build.
        - Edit the ninja file.
    - Run the build
    - 

## Monday 11th July
- So today I'm going to get back on my efforts to automate this process. 
    - I think I should start with creating a `ukl-v8` repo in the GitHub, and also a ukl/v8/Makefile.am in the main UKL repo.
    - Things to remember. 
        - Getting the right tags so that I know as a sanity check I'm using the most recent version that worked when it was shipped. This is whatever shipped in the last nodejs update.
            - I will push this tag to the `ukl-v8` repo so then I don't need to put the `refs/tags/10.2.154` line in the Makefile.am. I think this will save a little time, because then I'm not cloning stuff I don't need.
        - Edit the `v8_base_without_compiler.ninja` file to remove `-Werror` so that gcc doesn't throw an error and stop building `obj/libv8_monolith.a`.
- First I will get around the errors I had the other day where I can't compile `hello-world.cc` because I apparently don't have `stdg++`, `lm` etc..
    - Fixed with `sudo dnf install glibc-static libstdc++-static`.
- Now onto automation.
    - First, a new repo for `ukl-v8`. The reason I think I need this is because of the one change to `v8_base_without_compiler.ninja`.

    - `unikernelLinux/ukl` will have a folder in there which will be called v8. `unikernelLinux/ukl/v8` will have a `Makefile.am`. `Makefile.am` will make clones of `unikernelLinux/ukl_v8` rather than clones of the latest and greatest `v8`. `unikernelLinux/ukl_v8` will be set to `refs/tags/10.2.154` and have the necessary file changes.
        - This was my design process.
    - Ok so since the file that is edited isn't created until after some building, I need to figure out how to either edit the file with `Makefile.am` or edit config files that generate `v8/v8/out.gn/x64.release.sample/obj/v8_base_without_compiler.ninja`. 
        - But it's ok for now, let's just get as far as we can :).
    
    - I need to automate these steps.
    `git clone git@github.com:unikernelLinux/ukl_v8.git`
    `cd ukl_v8`
    `export PATH=/home/jonocameron/Documents/depot_tools/:$PATH`
    `fetch v8`
    `cd v8`
    `git checkout refs/tags/10.2.154 -b sample -t`
    `gclient sync -D`
    `gn gen out.gn/x64.release.sample --args='dcheck_always_on=false is_component_build=false is_debug=false target_cpu="x64" use_custom_libcxx=false v8_monolithic=true v8_use_external_startup_data=false is_clang=false use_sysroot=false'`
    Delete `-Werror` in `v8/v8/out.gn/x64.release.sample/obj/v8_base_without_compiler.ninja`
    `ninja -C out.gn/x64.release.sample v8_monolith`
    (Deleting `-Werror` allowed the compiler to breeze straight through).
    `make`

- Edited `Makefile.am` in /ukl so that make goes into ukl/v8 and creates `Makefile` and `Makefile.in`. Imagine if how good it would be if I forgot what Minecraft was and got to rediscover it :)

- Things are going fine. I'm annoyed that I'm only getting back to where I was 2 weeks ago. About to push a v8 clone to ukl_v8. It think I have a problem with this right now because I'm so unsure of what is and isn't going to work, it's painfully slow to check that things are running repeatably. 
- Currently figuring out if I can `git clone` the v8 source.
    - No you cannot. 
    `git clone https://chromium.googlesource.com/v8/v8.git`
    - You can if you add `.gclient` and `.gclient_entries` to the directory you are cloning from. Then it works.
    - I am not sure about `refs/tags/10.2.154` checkout though. 
    `gclient sync -D` works.
    `git checkout refs/tags/10.2.154 -b sample -t` does not work.
    - Trying clearing `/v8` and doing 
    `git clone -b 10.2.154 https://chromium.googlesource.com/v8/v8.git` appears to have worked to clone just the tag I want.
    - The next usual steps of setting up `out.gn` and building with ninja appear to be going fine as well. I am just checking that the delete `-Werror` hack still works and then I think I will have tested all of the individual components to then put together in the `Makefile.am`. Then I can move onto the makefile naturally deleting `-Werror` and THEN, I'll be onto linking ukl with v8.


## Tuesday 12th July
- Today I think I'm finally close to getting to the stage where I can start thinking about linking stuff together.
    - Rather than figuring out how to get the Makefile to rewrite something or edit a page, I decided why not just make a copy of `v8_base_without_compiler.ninja` and then swap them one the one with `-Werror`.
- I have successfully automated the process up the point where I produce a `libv8_monolith.a` file, `hello-world.o` file, both built statically. This is good, but annoying that it took this long. Eric said I shouldn't be sorry because he isn't surprised that it's taken so long because I've been dealing with Google build processes.
- Anyway, we just had a call about next steps.
    - I need to compile `hello-world.o` and `libv8_monolith.a` with the specific compile flags that UKL requires. These are:
    `AM_CFLAGS   = -no-pie -fno-pic -ggdb -mno-red-zone -mcmodel=kernel -static`
    He said that with these flags, the `hello-world.o` and `libv8_monolith.a` will not run in a normal environment, so if there are any tests that the ninja build process does, it will be upset.
    - My first step will be to get these flags working on `hello-world.o` then `libv8_monolith.a`, hopefully doing it on `hello-world.o` will save me time in getting over any speedbumps that I come across. 
    - He also said something about digging up the C++ runtime libraries with Ali, but that's something for later I think.

- `AM_CFLAGS = -no-pie -fno-pic -ggdb -mno-red-zone -mcmodel=kernel -static` is already included in the `Makefile.am`, I assume that this is for UKL.a. I need to add them to the other respective build/compile processes
- I believe I have added the flags to the .... something, idk where this was going
    - I remember. So there are `Build.gn`'s all over the place it's nuts, but I think I've found the one where I can add the `AM_CFLAGS`. I'm going to give it a go and see what happens. The file is located:
    `ukl/v8/v8/Build.gn` on `line 1448`.
    - I'm going to add our flags under the conditional `if (!is_clang && !is_win)`. This is hacky but I just want to make progress. I'm sure I could add a new flag to the whole build process called `is_v8` and that would add them but that's for later.

      # Add a bunch of flags for v8 x UKL builds.
      "-no-pie",
      "-fno-pic", 
      "-ggdb", "-mno-red-zone",
      "-mcmodel=kernel", 
      "-static",
- Adding the above flags hit some of the ~1800 build files but some of them did not like having those flags, a few of the errors were `requires unsupported dynamic reloc 11; recompile with -fPIC` and in the flags on the particular compile line I could see `-pie` which contradicts `-no-pie`
    - Trying now on `line 1202`. Want to see changes reflected in `v8_base_without_compiler.ninja`.
    - Where it first goes wrong is 


`[192/1821] LINK ./bytecode_builtins_list_generator
`FAILED: bytecode_builtins_list_generator `
`python3 "../../build/toolchain/gcc_link_wrapper.py" --output="./bytecode_builtins_list_generator" -- g++ -pie -Werror -Wl,--fatal-warnings -Wl,--build-id -fPIC -Wl,-z,noexecstack -Wl,-z,relro -Wl,-z,now -fuse-ld=gold -Wl,--threads -Wl,--thread-count=4 -m64 -rdynamic -Wl,-z,defs -Wl,--as-needed -pie -Wl,--disable-new-dtags -Wl,-O2 -Wl,--gc-sections -o "./bytecode_builtins_list_generator" -Wl,--start-group @"./bytecode_builtins_list_generator.rsp"  -Wl,--end-group  -latomic -ldl -lpthread -lrt`
`/usr/bin/ld.gold: error: obj/bytecode_builtins_list_generator/generate-bytecodes-builtins-list.o: requires unsupported dynamic reloc 11; recompile with -fPIC`

- Did a little code switchy swappy, so now I have a `BUILD.gn` file that I will have hanging around in the `ukl/v8` folder.

- When you get in in the morning, you're going to be figuring out how to get around this error written above.

## Wednesday 13th July
- UKL standup, sounds like (and I agree) I'm missing some of the build targets which means I am getting errors. Also mildly interesting that the above error has a flag that says `-pie` and I'm explicitly trying to use `-no-pie`.
    `grep -nr cflags . > find_cflags` 
    To find "all" instances of where cflags are set, then I can go through and delete and mention of `-fPIC` and `-pie`, which are as follows.
    `./v8/buildtools/third_party/libc++/BUILD.gn:26:    cflags += [ "-fPIC" ]`
    `./v8/build/config/aix/BUILD.gn:52:    cflags += [ "-fpic" ]`
    `./v8/build/config/compiler/BUILD.gn:431:    cflags += [ "-fPIC" ]`
    No mentions to `-pie`. I think even with this I think I've missed a few.

- Eric said to get ninja to dump all the calls to gcc, so I got `gn` which is the thing that builds all of the `.ninja` files to print its output so I can look at its calls to gcc, into a file called `gn_trace`.
    `gn gen out.gn/x64.release.sample -v --args='dcheck_always_on=false is_component_build=false is_debug=false target_cpu="x64" use_custom_libcxx=false v8_monolithic=true v8_use_external_startup_data=false is_clang=false use_sysroot=false' > gn_trace`
    - There seems to be one place here that calls gcc,
    `/build/config/gcc/BUILD.gn`
    which has an `ldflags = [ "-pie" ]` on line 94.

- Ok, sanity check. I want these to compile with theses flags `-no-pie -fno-pic -ggdb -mno-red-zone -mcmodel=kernel -static`.
    - I am having problems (so far) with `-no-pie` and `-fno-pic`. These are what are giving me problems right now. I think they are clashing with `-fPIC` and `-pie`, which I want to remove.
    - Maybe a way to grep two things at once.
    - Remember you removed the flags from `v8_base_without_compiler.ninja`
    `grep -nr 'cflags\|-pie' . > find_pie`
    `grep -nr 'cflags\|-fPIC' . > find_pic`

    `./third_party/protobuf/python/setup.py:171:    # -fPIC for this to work.` This doesn't look good?

- Tomorrow, I need to get in and get a fresh directory ready to go so that Ali and I can work through it. I guess automation is only helpful to get to checkpoints, not so much when you're trying to get to certain points.
    - I'll need to get to the point where I've done `gclient sync -D` I think so that everything is up-to-date but we haven't edited any of the build files. Maybe make a copy of the v8 checkout so when I inevitably butcher the source I can quicker copy it back in.
    - Smile, you'll get there :)
- Created a directory, and a base directory to copy. They should be ready to go on the `gn` command once I have exported depot_tools to path.

## Thursday 14th July 
- Hunting for `cflags` in the build system, especially looking out for `-fPIC` 
- So Ali and I looked around the build process and in `v8/build/config/compiler/BUILD.gn` we found `line 252` to add cflags, and also somewhere to delete `-fPIC`, which can be seen if we use the ninja command line args to output all arguments.
    - The commands were:
    `gn gen out.gn/x64.release.sample -v --args='dcheck_always_on=false is_component_build=false is_debug=false target_cpu="x64" use_custom_libcxx=false v8_monolithic=true v8_use_external_startup_data=false is_clang=false use_sysroot=false'`
    `cd out.gn/x64.release.sample`
    `ninja -v -t commands v8_monolith |& tee build_output`
    where build_output in an arbitrary file that we can view _every_ command that ninja uses to build out `libv8_monolith.a`. We can also see that `-fPIC` is gone because we deleted it. I'm not sure about `-pie`.
    - I done want to run `ninja -C out.gn/x64.release.sample v8_monolith` because I'm afraid it's not going to work.

- Keep `-t` in ldflags.

- So Ali was amazing but we're not done just yet.
    - We edited `gcc_link_wrapper.py` and `run.py` to return 0, but if the build process needs the `torque` files, then we will need to fix the build process, rather than taking this shortcut to just exit out of python scripts earlier. 
    - Today was pretty productive, despite the lack of notes. I learned a lot from watching Ali, and the tools he used in the command line.
    - He used `nm` to print out all of the symbols that `libv8_monolith.a` uses. He used grep to figure out what objects are made in the build process so that we can see if any extra are made.
    - He's really kind and patient :) 
    
## Friday 15th July
- Collected all inputs and outputs from the healthy v8 ninja build. (Did delete `-Werror` from `v8_compiler_without_base` just so it would run straight through) 
    - Did this so we don't have to do it every time we build/clean whatever.

- So with the edited build process, it seems to be failing building objects that have source code generated by a python script that we edited (`gcc_link_wrapper.py` or `run.py`). The generated code seems to be generated and put in `out.gn/x64.release.sample/gen`, so what if we just swap in the healthy `/gen` from a healthy build?
    - Bullied ninja into building me the thing I wanted, now I'm going to check that it's healthy as best I can by comparing it to the healthy `libv8_monolith.a` file.
    `nm libv8_monolith.a > libv8_monolith_symbols`
    `cat full_build_output3 | grep "g++ \-MMD" | grep -o "\-o .*" >> files`

- Running this through again just check that bullying it can work. (Before checking if the .a file is ok.)
    - Copied `/gen` in
    - Changed `v8_compiler_without_base`
    - `/v8/build/config/compiler/BUILD.gn` had already been changed.
    - `v8/build/toolchain/gcc_link_wrapper.py` returns 0.
    - `/v8/tools/run.py` returns 0.
    - BUT, SUBBING IN `/gen` MEANS THAT SOME OF IT IS COMPILED WITHOUT THE FLAGS. Wait does it? Because we changed the compiler flags, not the python build script to create `/gen`, so given that the compiler flags exist and act on the `.cc` files, maybe the .o files are made with the correct flags.
        - The correct flags were included. I am sometimes not stupid.  :D

- Ali liked that I swapped the `/gen` folder in, but would prefer a cleaner build down-stream (which makes sense), so we're probably going to try editing the `gcc_link_wrapper.py` so that it doesn't cry about compiling without `-fPIC`.
- return 0 gone, -pie gone from `/home/jonocameron/Documents/v8_testing/v8/gni/v8.gni`. This removed 1 of 2 -pie flags in the gcc_link_wrapper.py problem command.
- `/home/jonocameron/Documents/v8_testing/v8/build/config/gcc/BUILD.gn` also removed -pie, removed the second one.
    - What is holding us back is the fact that by playing around with these `-pie` flags is that we are not getting the correct files generated, like `out.gn/x64.release.sample/bytecode_builtins_list_generator`.

- On Monday, you are going to be trying to put it all together into UKL. Ali doesn't think it will work because of the hacky nature of the build, but we'll fix that next week. Eric also just wants me to prove the concept and then we'll go from there.

## Monday 18th July
- I appear to have misplaced `libv8_monolith.a`. I probably did this when I did `nm libv8_monolith.a > libv8_monolith_symbols`.
- Also, I have no idea why we stopped the `gcc_link_wrapper.py` and `run.py` from returning 0.
    - I got it back. Just had to put `return 0` back into `gcc_link_wrapper.py` and `run.py`. 

- Also, in the grand scheme of things for today, I am trying to collect a `v8.o` file to give to the UKL Makefile.
    - This involves 
        - Compiling the `hello-world.cpp` from V8 with my new `libv8_monolith.a` that has been compiled with the correct flags that UKL needs.
            - To do this I copied the new `libv8_monolith.a` and hit make from `/home/jonocameron/Documents/ukl/v8/v8`. (Now I'm back in my UKL branch)
        - Giving this `hello-world.o` to `ukl/Makefile`.
            - This just requires me to ensure `ukl/Makefile` isn't going to trample all over the new stuff I've made.
                - I have a `UKL.a` file... Now I need to figure out the next bit of the build process. I should probably automate up to this point. Maybe I'll do it later today. Goodness that'll be an undertaking lol.
- Taking a look at the commands that UKL uses to make and boot a new unikernel. 
    `autoreconf -i`
    `./configure --with-program=v8`
    `make -j`nproc``
    `make boot`
    - I kind of just ripped it with utter contempt for the standard procedure and just to see what happened. If it works then good for me. I do not expect it to. Either way, the very next thing I do is automate the whole process.

- Should I make sure that I use the `-r` flag when compiling? Yes, we do want to use that flag.

- So Ali and I edited the makefile a bunch, to the point that I don't really recognise it and I need to spend some time working through it so that I understand what is going on. I'm also thinking of learning vim so my life could potentially be easier when working on large projects.

- Tommorow:
    - I need to figure out how to trigger the pre-requistite steps in the makefile before it decides to launch into building the linux kernel. 
    - I need to automate up to where I am now. I think I would rather go back and automate because this would then ensure that the pre-req steps were hit. I also want to stop using the monitor and use my laptop but I like the keyboard...

## Tuesday 19th July
- My makefile now does things up to UKL.a. Now I'm going to make sure the automation works up to there too. 
    - Main thing is setting up the support folder to substitute the files that Ali and I edited.
        - Copied `/gen` in. XX
        - Changed `v8_compiler_without_base`. XX
        - `/v8/build/config/compiler/BUILD.gn` had already been changed. X
        - `v8/build/toolchain/gcc_link_wrapper.py` returns 0. XX
        - `/v8/tools/run.py` returns 0. XX
        - `/home/jonocameron/Documents/v8_testing/v8/gni/v8.gni`. X
        - `/home/jonocameron/Documents/v8_testing/v8/build/config/gcc/BUILD.gn`. X


- Everything on the automation front is going well apart from the correct flags being, as best as I can tell, overwritten. The only thing I can imagine doing this is `export PATH=/home/jonocameron/Documents/ukl/v8/depot_tools:$(PATH)` which is just ridiculous. I don't know why that particular package needs to screw with the BUILD.gn files but there we are.
    - I don't think it was depot_tools.
    - Got the right things in the right place now to at least have the `-no-pie -fno-pic -ggdb -mno-red-zone -mcmodel=kernel -static` flags. That's good news. 
    - I'm going to run it through just to check that it can successfully build `libv8_monolith.a`.
- Cool so I have an automated process to get all the way to `UKL.a` being produced. 
    - Now to set it up with the build process that actually builds a kernel. (I don't expect it to work.)
    - It did not work, but at least we know why it doesn't work.

## Wednesday 20th July
- I think that the powers that be are going to pull the plug given how hard this project will be to edit and get going on UKL. I told Eric that it will be a huge undertaking to get through it and I think he agrees with me.

- I'm going to see what happens when you fork and exec a shell inside the UKL.
    - Exec is not allowed within the ukl.

## Thursday 21st July
- The v8 project is officially dead.
- Moving onto getting Rust working within the UKL environment.