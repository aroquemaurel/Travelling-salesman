/**
 * \file genetic.c
 * \brief Fonctions d'algorithmes génétiques.
 * \author Antoine de Roquemaurel
 * \date 27/12/2012 18:00:25
 *
 * Implémentation des fonctions servant aux algorithmes génétiques. 
 * Ces fonctions ne sont appelés que depuis le main
 *
 */

#include "genetic.h"
#include "tour.h"

Tour genetic_distancePreservingCrossover(Tour pParent1, Tour pParent2) {
    Tour children = pParent1;
    Tour buff;
    int i=0;
    int j=0;
    int last=0;
    for(i=0; i < children.nbTowns ; ++i) { 
        printf("(%d %d) %d\n", last, i, util_sousTabExist(children, last, i, pParent2, true));
        if(!util_sousTabExist(children, last, i, pParent2, true)) {
            buff = pParent1;
                last = i;    
            printf("%d ", i);
        } 
    }
}
