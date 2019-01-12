#Makefile

all: e10

e10.o: e10.c e10.h
	gcc -Wall -pedantic e10.c -c -o e10.o

funcE10.o: funcE10.c
	gcc -Wall -pedantic funcE10.c -c -o funcE10.o

e10: e10.o funcE10.o
	gcc -Wall -pedantic e10.o funcE10.o -o e10