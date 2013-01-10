/**
 * \file main.c
 * \brief Fonction main.
 * \author Antoine de Roquemaurel
 * \date 19/11/2012 10:42:29
 *
 *  Point d'entrée du programme. Aucune fonction ne doit être déclarée
 * Ce sont des fonctions simples, qui doivent être indépendantes du projet.
 *
 */

/**
 * \mainpage Le problème du voyageur de commerce - Projet d'algorithmique en langage C
 * \author L2 Antoine de Roquemaurel (G1.1)
 *
 * \section Le problème
* Étant donné n points (des "villes") et les distances les séparant, trouver un chemin de longueur totale qui passe exactement une fois par chaque point et 
* reviennent au point de départ (une tournée).
*
* Ce problème peut servir tel quel a l'optimisation de trajectoires de machines-outils : par ex-
emple, pour minimiser le temps total que met une fraiseuse a commande numérique pour
percer n points dans une plaque de tôle ou pour percer les trous des composants d'un circuit
electronique comme dans le cas qui nous intéresse.

Ce problème est plus compliqué qu'il n'y parait et on ne connait pas de méthode de résolution
permettant d'obtenir des solutions exactes en un temps raisonnable pour de grandes instances
(grand nombre de villes) du problème. Pour ces grandes instances, on devra donc souvent se
contenter de solutions approchés, car on se retrouve face à une explosion combinatoire :
le nombre de chemins possibles passant par 69 villes est déjà un nombre d’une longueur de
100 chiffres. Pour comparaison, un nombre d'une longueur de 80 chiffres permettrait déjà de
représenter le nombre d'atomes dans tout l'univers connu.

Le problème du "voyageur de commerce" a été étudié depuis lontemps et on dispose d’une
grande variété d'algorithmes donnant le plus souvent des solutions approchés mais calculables
en un temps raisonnable.

\section Les algorithmes implémentéé
Ce problème sera implémenté via différents algorithmes : 
- Brute force
- Recherche locale aléatorie
- Recherche loacle systématique
- Algorithme génétique
*
 */ 

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include "parsing.h"
#include "errors.h"
#include "bruteForce.h"
#include "localSearch.h"

/**
 * Fonction d'entrée du programme
 * @param argc Nombre d'arguments du programme
 * @param argv Tableau contenant la liste des arguments du programme
 * @return Code d'erreur du programme
 */
int main (int argc, char** argv) {
    int i=0;
	char* fileName;	
	FILE* file = NULL;
	Instance instance;
	Errors errors = errors_new();
	Algo algos[3];
	Tour tour;
    srand(time(NULL));
                    Tour tour1, tour2; 
                    Town town1;

	gVerboseMode = parsing_parseVerboseMode(argv, argc); 
	fileName = parsing_parseFileName(argv, argc, &errors);
	parsing_algoType(argv, argc, &errors, algos);

	file = fopen(fileName, "r");
	if(file == NULL) {
		errors_setFileNotFound(&errors, fileName);
	}
	// on peut travailler
	if(errors.nbErrors == 0) {
	instance = instance_new(file);
        while(algos[i].type != END) {
           switch(algos[i].type) {
                case BRUTEFORCE:
                    printf("=== Brute force ===\n");
                    instance_initializeDistancesMatrix(&instance);
                    tour = bruteForce_bestPath(instance);
                    break;
                case LOCALSEARCH_RANDOM:
                    tour1.nbTowns = 10;
                    tour2 = tour1;
                    
                    tour1.towns[0].id = 1;
                    tour1.towns[1].id = 2;
                    tour1.towns[2].id = 3;
                    tour1.towns[3].id = 4; 
                    tour1.towns[4].id = 5;
                    tour1.towns[5].id = 6;
                    tour1.towns[6].id = 7;
                    tour1.towns[7].id = 8;
                    tour1.towns[8].id = 9;
                    tour1.towns[9].id = 10;
                    
                    tour_display(tour1);
                    tour_2opt(&tour1, 2,10);
                    printf("\n");
                    tour_display(tour1);
                    printf("\n");printf("\n");
                    printf("=== Recherche locale aléatoire ===\n");
                    tour = localSearch_randomBestPath(instance, algos[i].firstParameter); 
                    break;
                case LOCALSEARCH_SYSTEMATIC:
                    printf("=== Recherche locale systématique ===\n");
                    tour = localSearch_systematicBestPath(instance, algos[i].firstParameter);
                    break;
                case GENETIC:

                    tour1.nbTowns = 10;
                    tour2 = tour1;
                    
                    tour1.towns[0].id = 5;
                    tour1.towns[1].id = 3;
                    tour1.towns[2].id = 9;
                    tour1.towns[3].id = 1; 
                    tour1.towns[4].id = 2;
                    tour1.towns[5].id = 8;
                    tour1.towns[6].id = 0;
                    tour1.towns[7].id = 6;
                    tour1.towns[8].id = 7;
                    tour1.towns[9].id = 4;
                    
                    tour2.towns[0].id = 1;
                    tour2.towns[1].id = 2;
                    tour2.towns[2].id = 5;
                    tour2.towns[3].id = 3; 
                    tour2.towns[4].id = 9;
                    tour2.towns[5].id = 4;
                    tour2.towns[6].id = 8;
                    tour2.towns[7].id = 6;
                    tour2.towns[8].id = 0;
                    tour2.towns[9].id = 7;
                    tour_display(tour1);printf("\n");
                    tour_display(tour2);
                    printf("%d\n", util_sousTabExist(tour1, 1,2,tour2, false));
                    genetic_distancePreservingCrossover(tour1, tour2);
                    printf("=== Génétique ===\n");
                    printf("Genetic not implemented");
                    break;
           }
            printf("MEILLEUR TOURNÉE \n");
            tour_display(tour);
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
