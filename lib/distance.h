/*
 * =====================================================================================
 *
 *       Filename:  distance.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/12/2012 20:33:44
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __DISTANCE
#define __DISTANCE

#include <math.h>
#include "town.h"

/**
 */
typedef struct {
	Town firstTown;
	Town secondTown;
	double distance;
}Distance;

/**
 * 
 * @param pDistance
 * @param pFirstTown
 * @param pSecondTown
 */
void distance_new(Distance* pDistance, Town* pFirstTown, Town* pSecondTown);
/**
 * 
 * @param pTown1
 * @param pTown2
 * @return 
 */
double distance_calculDistance(const Town pTown1, const Town pTown2);

/**
 * 
 * @param pDistances
 * @param i
 * @param j
 * @return 
 */
double distance_betweenTowns(Distance* pDistances, int i, int j);

#endif

