TARGET=client server
CC=gcc
CFLAGS= -Wall -Wextra -g
normal: $(TARGET)
client: client.c
	$(CC) $(CFLAGS) client.c -o client

server: server.c
	$(CC) $(CFLAGS) server.c -o server

clean:
	$(RM) $(TARGET)