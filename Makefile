CC=gcc
CFLAGS=-Wall

all: queens

queens: queens.c
	$(CC) $(CFLAGS) queens.c -o bench -lm
