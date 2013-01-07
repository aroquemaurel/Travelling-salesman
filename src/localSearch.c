/**
 * \file localSearch.c
 * \brief Fonctions utiles.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 27/12/2012 18:00:13
 *
 * Entêtes des fonctions pouvant être utiles dans tout le projet. 
 * Ce sont des fonctions simples, qui doivent être indépendantes du projet.
 * Ces fonctions ne sont appelés que depuis le main
 *
 */
#include "localSearch.h"
#include "instance.h"
#include "tour.h"

// TODO Test
Tour localSearch_randomBestPath(Instance pInstance, int pTryNb) {
	Tour ret, buffTour;
	int first2opt, second2opt;
	int i;
	buffTour = tour_randomWalk(pInstance);	
	ret = buffTour;
    if(gVerboseMode) {
        printf("Random walk:\n ");
        tour_display(buffTour, true);
        printf("\n\n");
    }
	for(i=0 ; i < pTryNb ; ++i) { 
		do { 
            first2opt = util_rand(1, pInstance.nbTowns);
            second2opt = util_rand(1, pInstance.nbTowns);
		} while(first2opt != second2opt && 
				(first2opt != second2opt-1 || second2opt != first2opt-1));
		tour_2opt(&buffTour, first2opt, second2opt); 
        
		if(buffTour.length < ret.length) { 
			ret = buffTour;
            if(gVerboseMode) {
                printf("\nMeilleur tour après 2opt numéro %d: \n", i+1);  
                tour_display(ret, true);
                printf("\n");
            }

		}
	}

	return ret;
}

// random walk
// POUR i:=42
	// POUR CHAQUE ville
		// POUR CHAQUE villes non adjacentes
			// 2opt
		// FIN POUR CHAQUE
	// FIN POUR CHAQUE
// FIN POUR

Tour localSearch_systematicBestPath(Instance pInstance, int pTryNb) {
	Tour ret, buffTour;
	int first2opt, second2opt;
	int i;
	buffTour = tour_randomWalk(pInstance);	
	ret = buffTour;
	for(i=0 ; i < pTryNb ; ++i) {
		for(first2opt=0 ; first2opt < buffTour.nbTowns ; ++first2opt) {
            for(second2opt=first2opt+2 ; second2opt < buffTour.nbTowns ; ++second2opt ) {
                tour_2opt(&buffTour, first2opt, second2opt);
                if(buffTour.length < ret.length) {
                    ret = buffTour;
                }
            }
		}
	}

	return ret;
}