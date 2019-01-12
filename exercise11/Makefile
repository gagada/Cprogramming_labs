#Makefile

all: e11

e11.o: e11.c e11.h
	gcc -Wall -pedantic e11.c -c -o e11.o

funcE11.o: funcE11.c
	gcc -Wall -pedantic funcE11.c -c -o funcE11.o

e11: e11.o funcE11.o
	gcc -Wall -pedantic e11.o funcE11.o -o e11