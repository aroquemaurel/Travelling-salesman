/**
 * \file localSearch.h
 * \brief Fonctions de recherche locale
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 27/12/2012 18:00:18
 *
 * Entêtes des fonctions pouvant être utiles dans tout le projet. 
 * Ces fonctions ne sont appelés que depuis le main
 *
 */


#ifndef __LOCALSEARCH
#define	__LOCALSEARCH
#include "tour.h"
#include <time.h>
#include <stdlib.h>
Tour localSearch_randomBestPath(Instance pInstance, int pTryNb);
Tour localSearch_systematicBestPath(Instance pInstance, int pTryNb);
#endif	
