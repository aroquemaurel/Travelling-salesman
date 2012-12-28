/**
 * \file bruteForce.c
 * \brief Fonctions utiles.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 21/11/2012 22:04:08
 *
 * Entêtes des fonctions pouvant être utiles dans tout le projet. 
 * Ce sont des fonctions simples, qui doivent être indépendantes du projet.
 *
 */

#include "tour.h"

void tour_initialize(Tour* pTour, Instance pInstance) {
	int i;
	pTour->nbTowns = pInstance.nbTowns;
	pTour->length = -1;
	for(i=0; i < pInstance.nbTowns; ++i) {
		pTour->towns[i] = pInstance.towns[i];
	}
    pTour->distances = pInstance.distances;
	tour_calculLength(pTour);
}
bool tour_nextPermutation(Tour* pPermutation) {
	int i=pPermutation->nbTowns-1;
	Town buff;
	bool found=false;
	int k=pPermutation->nbTowns-1; 

	while(pPermutation->towns[k].id >= pPermutation->towns[k+1].id && k >= 0) {
		--k;
	}
	if(k != -1) {
		found = true;
		while(pPermutation->towns[k].id >= pPermutation->towns[i].id && i > k+1) {
			--i;
		}
		buff = pPermutation->towns[k];
		pPermutation->towns[k] = pPermutation->towns[i];
		pPermutation->towns[i] = buff;
		util_reverseArray(pPermutation->towns, k+1, pPermutation->nbTowns-1); 
	}
	return found;
}

void tour_calculLength(Tour* pTour) {
	int i;
	double length=0;

	for (i = 0; i < pTour->nbTowns ; ++i) { 
		if(i+1 != pTour->nbTowns) {
			length += distance_betweenTowns(pTour->distances, pTour->towns[i].id, pTour->towns[i+1].id);
		} else {
			length += distance_betweenTowns(pTour->distances, pTour->towns[i].id, pTour->towns[0].id);
		}
	}
	pTour->length = length;	
}

void tour_display(Tour pTour, bool pDisplay) {
    if(pDisplay) {
        int i;
        for(i = 0 ; i < pTour.nbTowns ; ++i) {
            printf("%d ", pTour.towns[i].id);
        }
        printf("\nLa longueur de ce tour est %f", pTour.length);
    }
}

Tour tour_randomWalk(Instance pInstance) {
    Tour ret;
    tour_initialize(&ret, pInstance);
	int i=0;
	int j=0;
	Town temp;
	srand(time(NULL));
    
	for(i = 0; i< ret.nbTowns;i++){
        srand(time(NULL));
		j = i + rand() % (ret.nbTowns-i);

		temp = ret.towns[i];
		ret.towns[i] = ret.towns[j];
		ret.towns[j]=temp;
	}
    return ret;
}

/**
 * 
 * @param pTour
 * @param pFirst
 * @param pSecond
 */
void tour_2opt(Tour* pTour, int pFirst, int pSecond) {
    int buff = pSecond-1;
    
    if(pFirst > pSecond) {
        util_swap(&pFirst, &pSecond);
    } 
    if(pSecond > pTour->nbTowns) {
        pSecond = 1;
    }
    if(buff < 1) {
        buff = pTour->nbTowns;
    }

    util_reverseArray(pTour->towns, pFirst, buff);     
    tour_calculLength(pTour);
}