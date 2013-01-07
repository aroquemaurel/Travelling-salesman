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
#include "localSearch.h"

int main (int argc, char** argv) {
    int i=0;
	char* fileName;	
	FILE* file = NULL;
	Instance instance;
	Errors errors;
	Algo algos[3];
	Tour tour;
    srand(time(NULL));

	errors_initialize(&errors);
	gVerboseMode = parsing_parseVerboseMode(argv, argc); 
	fileName = parsing_parseFileName(argv, argc, &errors);
	parsing_algoType(argv, argc, &errors, algos);

	file = fopen(fileName, "r");
	if(file == NULL) {
		errors_setFileNotFound(&errors, fileName);
	}
	// on peut travailler
	if(errors.nbErrors == 0) {
	instance_initialize(&instance, file);
        while(algos[i].type != END) {
           switch(algos[i].type) {
                case BRUTEFORCE:
                    printf("=== Brute force ===\n");
                    instance_initializeDistancesMatrix(&instance);
                    tour = bruteForce_bestPath(instance);
                    break;
                case LOCALSEARCH_RANDOM:
                    printf("=== Recherche locale aléatoire ===\n");
                    tour = localSearch_randomBestPath(instance, algos[i].firstParameter); 
                    break;
                case LOCALSEARCH_SYSTEMATIC:
                    printf("=== Recherche locale systématique ===\n");
                    tour = localSearch_systematicBestPath(instance, algos[i].firstParameter);
                    break;
                case GENETIC:
                    printf("=== Génétique ===\n");
                    printf("Genetic not implemented");
                    break;
           }
            printf("MEILLEUR TOURNÉE \n");
            tour_display(tour, true);
            ++i;
            printf("\n\n");
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
