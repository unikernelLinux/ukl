extern void ukl_set_bypass_syscall(int val);
extern void ukl_set_bypass_limit(int val);

int main() {
	ukl_set_bypass_syscall(1);
	ukl_set_bypass_limit(1);
	return 0;
}
