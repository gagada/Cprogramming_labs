#include <stdio.h>

int zero(int *arr, int num){
	int i, count;
	count = 0;
	for (i =0; i<num; i++){
		if(arr[i] == 0)
			count++;
	}

	return count;
}

void print(int *arr, int num){
	int i;
	printf("{");
	for(i=0; i<num; i++){
		if(i == num - 1)
			printf("%d ",arr[i]);
		else
			printf("%d, ",arr[i]);
	}
	printf("}");
}

void triple(int *arr, int num){
	int i;
	printf("{");
	for(i=0; i<num; i++){
		if(i == num - 1)
			printf("%d ",arr[i]*3);
		else
			printf("%d, ",arr[i]*3);
	}

	printf("}");	
}