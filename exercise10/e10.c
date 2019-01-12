#include "e10.h"

int main(){
	int nStrings, length, i;

	printf("Number of strings: ");
	scanf("%d", &nStrings);
	printf("Maximum string length: ");
	scanf("%d", &length);

	char **stringArray;

	stringArray = malloc(nStrings * sizeof(char*));
	for(i=0; i<nStrings; i++){
		printf("Give string %d: ",i);
		stringArray[i] = malloc((length + 1)*sizeof(char));
		scanf("%s", stringArray[i]);

	}
	printf("Input when sorted: \n");
	bubbleSort(stringArray, nStrings, length);

	free(stringArray);

	return 0;
}

