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
	errors_initialize(&errors);

	gVerboseMode = parsing_parseVerboseMode(argv, argc); 
	fileName = parsing_parseFileName(argv, argc, &errors);
	algoType = parsing_algoType(argv, argc, &errors);

	file = fopen(fileName, "r");
	if(file == NULL) {
		errors_setFileNotFound(&errors, fileName);
	}
	
	// on peut travailler
	if(errors.nbErrors == 0) {
		switch(algoType) {
			case BRUTEFORCE:
				break;
			case LOCALSEARCH_RANDOM:
				break;
			case LOCALSEARCH_SYSTEMATIC:
				break;
			case GENETIC:
				break;
		}
	} else {
		errors_displayErrorsMessage(&errors);	
	}
	return 0;
}
