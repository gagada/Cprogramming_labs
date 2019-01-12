#Makefile

all: e8

e8.o: e8.c e8.h
	gcc -Wall -pedantic e8.c -c -o e8.o

funcE8.o: funcE8.c
	gcc -Wall -pedantic funcE8.c -c -o funcE8.o

e8: e8.o funcE8.o
	gcc -Wall -pedantic e8.o funcE8.o -o e8