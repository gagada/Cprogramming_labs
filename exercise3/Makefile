#Makefile

all: e3

e3.o: e3.c e3.h
	gcc -Wall -pedantic e3.c -c -o e3.o

funcE3.o: funcE3.c
	gcc -Wall -pedantic funcE3.c -c -o funcE3.o

e3: e3.o funcE3.o
	gcc -Wall -pedantic e3.o funcE3.o -o e3