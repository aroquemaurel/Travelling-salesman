/**
 * \file distance.c
 * \brief Fonctions des distances 
 * \author Antoine de Roquemaurel
 * \date 01/12/2012 20:33:39
 *
 * Entêtes des fonctions se rapportant aux distances
 *
 */

#include "distance.h"
#include "util.h"
Distance distance_new(Town pFirstTown, Town pSecondTown) {    
    Distance ret;
	ret.firstTown = pFirstTown;
	ret.secondTown = pSecondTown;
	ret.distance = distance_calculDistance(pFirstTown, pSecondTown);
}

double distance_calculDistance(const Town pTown1, const Town pTown2) {
	double x1=pTown1.x, x2=pTown2.x;
	double y1=pTown1.y, y2=pTown2.y;
	return (sqrt(pow((x1 > x2) ? x1 - x2 : x2 - x1, 2) + 
				 pow((y1 > y2) ? y1 - y2 : y2 - y1, 2)
			)); //Pythagore
}

Distance distance_searchDistance(Distance* pDistances, const int pFirst, const int pSecond) {
	return (pDistances[util_sum(0,pFirst-1)+pSecond-1]);
}

double distance_betweenTowns(Distance* pDistances, int i, int j) {
	Distance distance;
	if(i < j) {
		util_swap(&i, &j);
	} else if(j == i) {
		return 0;
	}
	distance = distance_searchDistance(pDistances, i, j);

	return (distance.distance);
}
