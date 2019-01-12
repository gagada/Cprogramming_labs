#Makefile

all: e4

e4.o: e4.c e4.h
	gcc -Wall -pedantic e4.c -c -o e4.o

funcE4.o: funcE4.c
	gcc -Wall -pedantic funcE4.c -c -o funcE4.o

e4: e4.o funcE4.o
	gcc -Wall -pedantic e4.o funcE4.o -o e4