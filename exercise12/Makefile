#Makefile

all: e12

e12.o: e12.c e12.h
	gcc -Wall -pedantic e12.c -c -o e12.o

funcE12.o: funcE12.c
	gcc -Wall -pedantic funcE12.c -c -o funcE12.o

e12: e12.o funcE12.o
	gcc -Wall -pedantic e12.o funcE12.o -o e12