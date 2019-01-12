#Makefile

all: e7

e7.o: e7.c e7.h
	gcc -Wall -pedantic e7.c -c -o e7.o

funcE7.o: funcE7.c
	gcc -Wall -pedantic funcE7.c -c -o funcE7.o

e7: e7.o funcE7.o
	gcc -Wall -pedantic e7.o funcE7.o -o e7