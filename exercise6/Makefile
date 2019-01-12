#Makefile

all: e6

e6.o: e6.c e6.h
	gcc -Wall -pedantic e6.c -c -o e6.o

funcE6.o: funcE6.c
	gcc -Wall -pedantic funcE6.c -c -o funcE6.o

e6: e6.o funcE6.o
	gcc -Wall -pedantic e6.o funcE6.o -o e6