#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void bubbleSort(char *array[], int n, int len){
	int i, j, sorted;
	char *temp;
	sorted = 0;

	temp = malloc((len + 1)*sizeof(char));
	for(i=0; i<n-1 && !sorted; ++i){
		sorted = 1;
		for(j=0; j<n-1-i; ++j){
			if(strcmp(array[j], array[j+1])>0){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
				sorted = 0;
			}
		}
	}
	for(j=0; j<n; j++){
		if(j == n -1)
			printf("%s", array[j]);
		else
			printf("%s\n", array[j]);

	}
	free(temp);
} 