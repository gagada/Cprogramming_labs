#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char const *argv[]){

	FILE *ifp, *ofp;
	int numOutput;
	int i,j;
	int firstLoop, secondLoop = 0;
	int inputFirstL, inputSecondL;

	if(argc > 4){
		printf("To many arguments supplied");
		exit(0);
	}
	if(argc == 1){
		printf("Not enough arguments supplied");
		exit(0);
	}

	else if(strcmp(argv[1],"-in") == 0) {
		ifp = fopen(argv[2], "w");

		if(ifp == NULL){
			fprintf(stderr, "Can't open input file!\n");
			exit(1);
		}

		inputFirstL = 12;
		inputSecondL = 6;
		if ((inputFirstL * inputSecondL) > 0 && (inputFirstL * inputSecondL) < 1000){
			for(i=1; i<=inputFirstL; i++){
				for(j=1; j<=inputSecondL; j++)
					fprintf(ifp,"%d\t", i*j);
			fprintf(ifp,"\n");
			}	
		}
		else{
			printf("Limit Requirments Not Met.");
		}
		fclose(ifp);			
	}


	else if(strcmp(argv[1],"-out") == 0) {
		ofp = fopen(argv[2], "r");

		if(ofp == NULL){
			fprintf(stderr, "Can't open input file!\n");
			exit(1);
		}

		while(!feof(ofp)){
			fscanf(ofp, "%d", &numOutput);
			printf("%d\t", numOutput);
		}

		fclose(ofp);
	}

	else{

		firstLoop = atoi(argv[1]);
		secondLoop = atoi(argv[2]);

		//printf("%d %d %d %d \n", firstLoop, secondLoop, isdigit('2'), isdigit(secondLoop));
		

		
		if ((firstLoop * secondLoop) > 0 && (firstLoop * secondLoop) < 1000){
			for(i=1; i<=firstLoop; i++){
				for(j=1; j<=secondLoop; j++)
					printf("%d\t", i*j);
			printf("\n");
			}	
		}
		else{
			printf("Limit Requirments Not Met.");
		}	
	}	
	return 0;

}