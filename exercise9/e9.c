#include "e9.h"

int main(){
	char string1[12];
	char string2[12];

	printf("Enter the first word: ");
	scanf("%s", string1);
	printf("Enter the second word: ");
	scanf("%s", string2);

	append(string1,string2);

	return 0;

}