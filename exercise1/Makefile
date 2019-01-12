#Makefile

all: e1

el.o: e1.c e1.h
	gcc -Wall -pedantic e1.c -c -o e1.o

printE1.o: printE1.c
	gcc -Wall -pedantic printE1.c -c -o printE1.o

e1: e1.o printE1.o
	gcc -Wall -pedantic e1.o printE1.o -o e1