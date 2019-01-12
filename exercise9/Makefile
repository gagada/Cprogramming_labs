#Makefile

all: e9

e9.o: e9.c e9.h
	gcc -Wall -pedantic e9.c -c -o e9.o

funcE9.o: funcE9.c
	gcc -Wall -pedantic funcE9.c -c -o funcE9.o

e9: e9.o funcE9.o
	gcc -Wall -pedantic e9.o funcE9.o -o e9