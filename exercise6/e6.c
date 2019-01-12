#include "e6.h"

int main(){
	float a,b,c,d;
	float min, max, total, mean = 0;
	printf("Give four floats: ");
	scanf("%f %f %f %f", &a,&b,&c,&d);
	min = otherMin(a,b,c,d);
	max = otherMax(a,b,c,d);
	total = sum(a,b,c,d);
	mean = total / 4;
	printf("min: %f\n",min);
	printf("max: %f\n",max);
	printf("sum: %f\n",total);
	printf("mean: %f",mean);
	
	return 0;
}