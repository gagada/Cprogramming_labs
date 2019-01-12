#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void threeColorsSort(int *theArray, int arraySize){
	int i, j, temp, index_of_max;

    for(i = arraySize-1; i >= 1; --i){
        index_of_max = i;
        for(j = i-1; j >= 0; --j){
            if (theArray[j] > theArray[index_of_max]){
                index_of_max = j;
            }
        }
        if (index_of_max != i){
            temp = theArray[index_of_max];
            theArray[index_of_max] = theArray[i];
            theArray[i] = temp;
        }
    }

    for(j = 0; j<arraySize; j++){
    	if (j == arraySize -1)
    		printf("%d", theArray[j]);
    	else
    		printf("%d\n", theArray[j]);
    }
}