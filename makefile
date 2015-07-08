CC=gcc
hello: src/hello.c src/hello.h
	$(CC) -o bin/hello src/hello.c
