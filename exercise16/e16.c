#include "e16.h"

int main(){

	int *array;
	int size;
	int i;

	printf("Number of inputs: ");
	scanf("%d", &size);
	array = (int*)malloc(sizeof(int) * size);
	for(i=0; i<size; i++){
		printf("Give number %d: ",i);
		scanf("%d", &array[i]);
	}
	printf("Result of applying op_double: { ");
	applyTo(op_double, array, size);
	printf(" }\n");
	printf("Result of applying op_reset: { ");
	applyTo(op_reset, array, size);
	printf(" }\n");
	printf("Result of applying op_invert: { ");
	applyTo(op_invert, array, size);
	printf(" }");
	
	free(array);
	return 0;
}

