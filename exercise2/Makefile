#Makefile

all: e2

e2.o: e2.c e2.h
	gcc -Wall -pedantic e2.c -c -o e2.o

funcE2.o: funcE2.c
	gcc -Wall -pedantic funcE2.c -c -o funcE2.o

e2: e2.o funcE2.o
	gcc -Wall -pedantic e2.o funcE2.o -o e2