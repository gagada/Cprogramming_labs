#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void op_double(int *a){
	int value = *a;
	printf("%d", value*2);

}

void op_reset(int *a){
	int value = *a;
	printf("%d", value*0);
}

void op_invert(int *a){
	int value = *a;
	printf("%d", value * -1);
}

void applyTo(void (*func) (int *), int *tab, int size){
	int i;
	void (*arithmeticFuncPtr) (int *);
	arithmeticFuncPtr = func;
	for(i=0; i<size; i++){
		arithmeticFuncPtr(tab + i);
		if(i != size-1)
			printf(", ");
		else
			printf(" ");
	}	
}