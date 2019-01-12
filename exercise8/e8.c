#include "e8.h"
#define MAX 10

int main(){
	int array[MAX];
	int result;
	int i;

	printf("Input 10 numbers: \n");
	// another way for scanning not efficent: scanf("%d%d%d%d%d",&array[i],&m,&v,&i,&e);
	for(i = 0; i<10; i++)
		scanf("%d", &array[i]);
	result = zero(array,MAX);

    printf("Initial array: ");
	print(array,MAX);
	printf("\n");
	printf("Number of 0's: %d\n", result);
    printf("Tripled array: ");
	triple(array,MAX);
	return 0;
}