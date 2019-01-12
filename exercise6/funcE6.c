#include <stdio.h>

float min(float a, float b){
	if (a < b)
		return a;
	else if(a > b)
		return b;
	else
		return 0;
}

float otherMin(float a, float b, float c, float d){
	if (a < b && a < c && a < d)
		return a;
	else if (b < a && b < c && b < d)
		return b;
	else if (c < a && c < b && c < d)
		return c;
	else
		return d;
}

float max(float a, float b){
	if (a > b)
		return a;
	else if(a < b)
		return b;
	else
		return 0;
}

float otherMax(float a, float b, float c, float d){
	if (a > b && a > c && a > d)
		return a;
	else if (b > a && b > c && b > d)
		return b;
	else if (c > a && c > b && c > d)
		return c;
	else
		return d;
}

float sum(float a, float b, float c, float d){
	return a + b + c + d;
}