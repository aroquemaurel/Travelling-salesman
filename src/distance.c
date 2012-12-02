/*
 * =====================================================================================
 *
 *       Filename:  distance.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/12/2012 20:33:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *
 * =====================================================================================
 */
#include "distance.h"

void distance_new(Distance* pDistance, Town* pFirstTown, Town* pSecondTown) {
	pDistance->firstTown = *pFirstTown;
	pDistance->secondTown = *pSecondTown;
	pDistance->distance = -1;
}

void distance_calculDistance(Distance* pDistance) {
	// TODO
}


