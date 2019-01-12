#include "e7.h"

int main(){
	
	int a, b;
	int addResult, subResult, mulResult, divResult;
	printf("Give a: ");
	scanf("%d", &a);
	printf("Give b: ");
	scanf("%d", &b);

	addResult = add(a,b);
	subResult = sub(a,b);
	mulResult = mult(a,b);
	divResult = div(a,b);

	printf("%d + %d = %d\n",a,b,addResult);
	printf("%d - %d = %d\n",a,b,subResult);
	printf("%d * %d = %d\n",a,b,mulResult);
	printf("%d / %d = %d",a,b,divResult);

	return 0;
}