/**
 * \file tour.h
 * \brief Programme de tests.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 21/11/2012 22:04:13
 *
 * Programme de test pour l'objet de gestion des chaînes de caractères Str_t.
 *
 */

#ifndef __TOUR
#define __TOUR

#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#include "town.h"
#include "instance.h"
#include "distance.h"

/**
 * \struct Tour tour.h
 * \brief Objet d'une tournée
 *
 * Town bla bla bla est un petit objet de gestion de chaînes de caractères. 
 * La chaîne se termine obligatoirement par un zéro de fin et l'objet 
 * connait la taille de chaîne contient !
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

