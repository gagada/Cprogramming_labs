#Makefile

all: e16

e16.o: e16.c e16.h
	gcc -Wall -pedantic e16.c -c -o e16.o

funcE16.o: funcE16.c
	gcc -Wall -pedantic funcE16.c -c -o funcE16.o

e16: e16.o funcE16.o
	gcc -Wall -pedantic e16.o funcE16.o -o e16