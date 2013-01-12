/**
 * \file instance.c
 * \brief Fonctions utiles.
 * \author Antoine de Roquemaurel
 * \date 21/11/2012 22:03:26
 *
 * Entêtes des fonctions pouvant être utiles dans tout le projet. 
 * Ce sont des fonctions simples, qui doivent être indépendantes du projet.
 *
 */

#include "instance.h"
#include "util.h"

Instance instance_new(FILE* pFile) {
    Instance newInstance;
	int dimension, buffId=0;
	int buff;
	bool displayData = false;
	char buffTag[255] = "";
	char buffValue[255] = "";
	char name[256] = "";
	float buffX, buffY;
	Town townBuff;
	
	newInstance.nbTowns = 0;
	newInstance.name = "";

	while(!feof(pFile)) {
		if(!displayData) {
			fscanf(pFile, " %s %s", buffTag, buffValue);
            
            if(strcmp(buffValue, ":") == 0) {
                fscanf(pFile, " %s", buffValue);
            }
			if(strcmp(buffTag, "NAME:") == 0 || strcmp(buffTag, "NAME") == 0) {
				strcpy(name, buffValue);
			} else if(strcmp(buffTag, "DIMENSION:") == 0  || strcmp(buffTag, "DIMENSION") == 0) {
				dimension = atoi(buffValue);
            } else if(  strcmp(buffTag, "DISPLAY_DATA_SECTION") == 0 || 
		    			strcmp(buffTag, "NODE_COORD_SECTION") == 0) {
				displayData = true;
			} else {
                fgets(buffTag, 256, pFile) ;  // Autre tag, on cherche pas à comprendre, ligne suivante.
            }
		} else { 
			if(buffId == 0) {
				fseek(pFile, -1, SEEK_CUR);
			}
			fscanf(pFile, " %d %f %f", &buff, &buffX, &buffY);
            
			townBuff = town_new(++buffId, buffX, buffY);
			instance_push(&newInstance, townBuff);
			if(buffId >= dimension) {
				fscanf(pFile, " %s", buffTag);
				displayData = false;
			}
		}

	}

    newInstance.nbTowns = dimension;
	newInstance.name = name;
    instance_initializeDistancesMatrix(&newInstance);
    
    return newInstance;
}


void instance_display(const Instance pInstance) {
    // TODO
}


void instance_push(Instance* pInstance, const Town pTown) { // TODO exception nbTowns != 500. TODO Defines ou dynamique
	pInstance->towns[pInstance->nbTowns++] = pTown;
}


void instance_initializeDistancesMatrix(Instance* pInstance) {
	int i, j, k = 0;
    Distance buffDistance;

    pInstance->distances = malloc((util_sum(0, pInstance->nbTowns))*sizeof(Distance)); // On alloue la matrice des distances
	for(i = 0 ; i <= pInstance->nbTowns; ++i) {
		for(j = 0 ; j < i ; ++j) {
			buffDistance = distance_new((pInstance->towns[i-1]), (pInstance->towns[j]));
			pInstance->distances[k] = buffDistance;
			++k;
		}
	}
}


void instance_displayLinearVector(Instance pInstance) {
	int i;
	for(i = 0 ; i < util_sum(0, pInstance.nbTowns); ++i) {
		printf("%d%d(%.2f) ", pInstance.distances[i].firstTown.id, pInstance.distances[i].secondTown.id, pInstance.distances[i].distance);  
	}
	printf("\n");
}


void instance_displayMatrix(Instance pInstance) { 
	int previous = pInstance.distances[0].firstTown.id; 
	int i, k;

	for(i = 0, k = 0 ; i < util_sum(0, pInstance.nbTowns); ++i) {
		if(previous != pInstance.distances[i].firstTown.id) {
			++k;
			printf("\n");
			previous = pInstance.distances[i].firstTown.id; 
		}
		if(pInstance.distances[i].distance < 10) {
			printf("   ");
		} else if(pInstance.distances[i].distance < 100) {
			printf("  ");
		} else if(pInstance.distances[i].distance < 1000) {
			printf(" ");
		}
		printf("%.2f ", pInstance.distances[i].distance);  // TODO Remplacer i/j par distances
	}
	printf("\n");
}
