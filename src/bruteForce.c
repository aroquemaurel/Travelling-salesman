/**
 * \file bruteForce.c
 * \brief Programme de tests.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 27/12/2012 17:58:29
 *
 * Implémentation des fonctions utilisant la force brute. 
 * Ces fonctions ne sont appelés que depuis le main
 *
 */

#include "bruteForce.h"
#include "util.h"

Tour bruteForce_bestPath(Instance pInstance) {
	Tour buffTour, bestTour;
	tour_initialize(&buffTour, pInstance);
	bestTour = buffTour;
	while(tour_nextPermutation(&buffTour)) {
		tour_calculLength(&buffTour);
		if(buffTour.length < bestTour.length) {
			bestTour = buffTour;
		}
        
        util_displayVerboseMode("Tour : ");
        tour_display(buffTour, gVerboseMode);
        util_displayVerboseMode("\n\n");
	}
	return bestTour;
}