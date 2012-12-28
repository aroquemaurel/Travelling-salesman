/*
 * =====================================================================================
 *
 *       Filename:  bruteForce.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  27/12/2012 17:58:29
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *
 * =====================================================================================
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