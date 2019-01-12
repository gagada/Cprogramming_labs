#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void fibonacci(int n){
	int *array;
	int i;
	array = (int*)malloc(n * sizeof(int));

	for(i=0; i<=n; i++)
		if (n == 0){
			exit(0);
		}
		else if (i == 1){
			array[i] = 1;
		}
		else if (i == 2){
			array[i] = 1;
		}
		else{
			array[i] = array[i-1] + array[i-2];
		}

	for(i=1; i<=n; i++){
		if(i == n)
			printf("%d", array[i]);
		else
			printf("%d\n", array[i]);
	}

	free(array);
}