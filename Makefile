CC=gcc
SRC=$(wildcard src/*.c)   
all:
	$(CC) -g -Ilib -O0 $(SRC) -o client-demo -Llib -laes -lkerberos -lcurl

clean:
	rm -f *.o client-demo
