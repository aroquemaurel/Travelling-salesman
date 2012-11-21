/*
 * =====================================================================================
 *
 *       Filename:  main.c
 *
 *    Description:  Point d'entrée du programme. Aucune fonction ne doit être déclarée
 *						dans ce fichier.
 *
 *        Version:  1.0
 *        Created:  19/11/2012 10:41:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "parsing.h"
#include "errors.h"

int main (int argc, char** argv) {
	char* fileName;
	FILE* file = NULL;
	Errors errors;
	AlgoType algoType;
	int parameter1 = 0;
	int parameter2 = 0;
	errors_initialize(&errors);

	gVerboseMode = parsing_parseVerboseMode(argv, argc); 
	fileName = parsing_parseFileName(argv, argc, &errors);
	algoType = parsing_algoType(argv, argc, &errors, &parameter1, &parameter2);

	file = fopen(fileName, "r");
	if(file == NULL) {
		errors_setFileNotFound(&errors, fileName);
	}
	// on peut travailler
	if(errors.nbErrors == 0) {
		switch(algoType) {
			case BRUTEFORCE:
				printf("Brute force not implemented");
				break;
			case LOCALSEARCH_RANDOM:
				printf("Random local search not implemented");
				break;
			case LOCALSEARCH_SYSTEMATIC:
				printf("systematic local search not implemented");
				break;
			case GENETIC:
				printf("Genetic not implemented");
				break;
		}
	} else {
		errors_displayErrorsMessage(&errors);	
	}
	return 0;
}
