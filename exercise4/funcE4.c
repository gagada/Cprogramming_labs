#include <stdio.h>
#define MAX 10

void print(){
	int i, lower, upper;
	lower = 0;
	upper = 40;

	for(i=lower; i<=upper; i++){
		if(i % 2 == 0)
			printf("%d ",i);
	}
	printf("\n");
}

void doubleFor(){
	int i, j, lower, upper, step;
	lower = 1;
	upper = 10;
	step = 0;
	int num = 1;
	printf("Numbers 1 to 100:\n");
	for(i=lower; i<=upper; i++){
		for(j=lower; j<=upper; j++){
			printf("%4.d",num);
			num++;
			step++;
			if (step == MAX){
				printf("\n");
				step = 0;
			}
		}
	}
}

void square(){
	int a = 1;
	while(a != 0){
		printf("Give a number: ");
		scanf("%d", &a);
		if(a == 0)
			printf("You entered zero.");
		else
			printf("The square of %d is %d\n",a, a*a);
	}	
}