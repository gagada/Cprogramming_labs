#include "e12.h"

int main(){
	int i,n;

	printf("Give n: ");
	scanf("%d", &n);

	for(i=0; i <=n; i++)
		if(i >= 1 && i != n)
			printf("%d\n", fibonacci(i));
		else if(i == n)
			printf("%d", fibonacci(i));
	return 0;
}

