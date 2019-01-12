#include <stdio.h>

void askZero(){
	int a;
	printf("Give an integer: ");
	scanf("%d", &a);

	if (a == 0)
		printf("The number you entered equals zero\n");
	else
		printf("The number you entered does not equal zero\n");

}

void askFloats(){
	float a, b;
	printf("Give two floats: ");
	scanf("%f %f", &a, &b);	
	
	if(a > b)
		printf("%f is the largest\n", a);
	if(a < b)
		printf("%f is the largest\n", b);
	if (a == b)
		printf("%f is eqaul to %f\n",a,b);
}

void divMult(){
	int a;
	printf("Give an integer: ");
	scanf("%d", &a);

	if(a % 2 == 0)
		printf("Result is %d\n", a/2);
	else
		printf("Result is %d\n", a*3);

}

void musketeers(){
	int a, b,c;
	printf("Give three integers: ");
	scanf("%d %d %d", &a, &b, &c);	
	
	if(a == b || a == c || b == c)
		printf("Some numbers are equal");
	else
		printf("All are unique");
}