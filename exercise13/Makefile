#Makefile

all: e13

e13.o: e13.c e13.h
	gcc -Wall -pedantic e13.c -c -o e13.o

funcE13.o: funcE13.c
	gcc -Wall -pedantic funcE13.c -c -o funcE13.o

e13: e13.o funcE13.o
	gcc -Wall -pedantic e13.o funcE13.o -o e13