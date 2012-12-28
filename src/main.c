/**
 * \file bruteForce.c
 * \brief Fonction main.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 19/11/2012 10:42:29
 *
 *  Point d'entrée du programme. Aucune fonction ne doit être déclarée
 * Ce sont des fonctions simples, qui doivent être indépendantes du projet.
 *
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "errors.h"
#include "parsing.h"
#include "bruteForce.h"

int main (int argc, char** argv) {
	char* fileName;	
	FILE* file = NULL;
	int parameter1 = 0;
	int parameter2 = 0;
	Instance instance;
	Errors errors;
	AlgoType algoType;
	Town test1, test2;
	Tour tour;
	test1.id = 3;
	test2.id = 1;
	Distance test;
	distance_new(&test, &test1, &test2);

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
	instance_initialize(&instance, file);

		switch(algoType) {
			case BRUTEFORCE:
				tour = bruteForce_bestPath(instance);
				printf("La meilleure tournée est la tournée : ");
				tour_display(tour, true);
                
                tour_initialize(&tour, instance);
                printf("\n\n");
                tour_display(tour, true);
                tour_2opt(&tour, 2,6);
                printf("\n\n");
                tour_display(tour, true);
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
		errors_displayErrorsMessage(errors);	
		return EXIT_FAILURE;
	}

	if(file != NULL) {
		fclose(file);
	}

	return EXIT_SUCCESS;
}
