#include "e11.h"

int main(){
	int *array;
	int i, size;


	printf("Number of inputs: ");
	scanf("%d", &size);

	array = (int*)malloc(size * sizeof(int));
	for(i = 0; i < size; i++){
		printf("Give number %d: ", i);
		scanf("%d", &array[i]);
	}
	printf("Input when sorted:\n");
	threeColorsSort(array, size);
	free(array);

	return 0;

}