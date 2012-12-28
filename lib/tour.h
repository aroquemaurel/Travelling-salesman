/*
 * =====================================================================================
 *
 *       Filename:  tour.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/11/2012 22:04:13
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __TOUR
#define __TOUR

#include <stdlib.h>
#include <stdbool.h>

#include "town.h"
#include "instance.h"
#include "distance.h"

/**
 */
typedef struct {
	Town towns[N];
	int nbTowns;
	double length;
    Distance* distances;
}Tour;

/**
 * 
 * @param pTour
 * @param pInstance
 */
void tour_initialize(Tour* pTour, Instance pInstance);

/**
 * 
 * @param pPermutation
 * @return 
 */
bool tour_nextPermutation(Tour* pPermutation);

/**
 * 
 * @param pTour
 */
void tour_calculLength(Tour* pTour);

/**
 * 
 * @param pTour
 * @param pDisplay
 */
void tour_display(Tour pTour, bool pDisplay);

/**
 * 
 * @param pInstance
 * @return 
 */
Tour tour_randomWalk(Instance pInstance);

/**
 * 
 * @param pTour
 * @param pFirst
 * @param pSecond
 */
void tour_2opt(Tour* pTour, int pFirst, int pSecond);
#endif

