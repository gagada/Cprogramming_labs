#include <stdio.h>

int main(){
	int i, a;
	char option = 'y';

	while (option != 'n'){
		printf("Give a number: ");
		scanf("%d", &a);
		for(i = 1; i<=a; i++)
			printf("%d\n",i);	
		printf("Run again (y/n)? ");
		scanf(" %c", &option);
		if(option == 'N')
			option = 'n';	
	}
	printf("Exiting...");
	return 0;

}