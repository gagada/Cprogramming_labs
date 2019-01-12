#include <stdio.h>

void sum(){
	int a, b;

	printf("Give two integers: ");
	scanf("%d %d", &a, &b);
	printf("You entered %d and %d, their sum is: %d\n",a,b,a+b);
}

void sumFloat(){
	float a, b;

	printf("Give two floats: ");
	scanf("%f %f", &a, &b);
	printf("You entered %f and %f, their product is: %f\n",a,b,a*b);
}

void word(){
	char word[100];
	printf("Give a word: ");
	scanf("%s", word);
	printf("%s %s", word,word);	

}