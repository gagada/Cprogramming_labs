#include <stdio.h>
#include <stdlib.h>

void append(char *str1, char *str2){
	char *app;
	int i,j;
	app = (char*)malloc(sizeof(str1) + sizeof(str2));

	for(i=0; str1[i]!= '\0'; i++){
		app[i] = str1[i];
	}
	for(j=0; str2[j]!= '\0';j++,i++)
		app[i] = str2[j];

	printf("Result of append: %s", app);
	free(app);
}