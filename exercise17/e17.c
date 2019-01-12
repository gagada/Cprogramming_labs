#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int i,n,value;
	int count;

	printf("Enter a number: ");
	scanf("%d", &n);
	value = n;

	for(i=0; n!=0; i++){
		if(n % 2 == 1)
			count++;
		n = n/2;
	}

	printf("The number of bits set in %d is %d",value,count);
	return 0;

}


