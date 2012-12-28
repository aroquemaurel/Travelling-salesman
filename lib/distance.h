/**
 * \file distance.h
 * \brief Programme de tests.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 01/12/2012 20:33:44
 *
 * Programme de test pour l'objet de gestion des chaînes de caractères Str_t.
 *
 */

#ifndef __DISTANCE
#define __DISTANCE

#include <math.h>
#include "town.h"

/**
 * \struct Distance distance.h
 * \brief Objet des distances
 *
 * Town bla bla bla est un petit objet de gestion de chaînes de caractères. 
 * La chaîne se termine obligatoirement par un zéro de fin et l'objet 
 * connait la taille de chaîne contient !
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

