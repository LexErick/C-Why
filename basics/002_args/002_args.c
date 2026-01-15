#include <stdio.h>

int main(int argc, char *argv[]){

	/* Iteration through the arguments */
	printf("Number of arguments: %d\n", argc);
	
	/* Variable 'argc' holds the number of command line arguments, including the program name itself */
	for(int i = 0; i < argc; i++){
		printf("Argument %d: %s\n", i, argv[i]);
	}
	return 0;
}
