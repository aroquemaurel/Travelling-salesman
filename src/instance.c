/*
 * =====================================================================================
 *
 *       Filename:  instance.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/11/2012 22:03:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *
 * =====================================================================================
 */
#include "instance.h"

void instance_initialize(Instance* pInstance, FILE* pFile) {
	int dimension, buffId=0;
	bool displayData = false;
	char buffTag[255] = "";
	char buffValue[255] = "";
	char name[256] = "";
	float buffX, buffY;
	Town townBuff;
	
	pInstance->nbTown = 0;
	pInstance->name = "";
	townBuff.x = 0;
	townBuff.y = 0;
	townBuff.id = 0;
	instance_push(pInstance, townBuff);

	while(!feof(pFile)) {
		if(!displayData) {
			fscanf(pFile, " %s %s", buffTag, buffValue);
			if(strcmp(buffTag, "NAME:") == 0) {
				strcpy(name, buffValue);
			} else if(strcmp(buffTag, "DIMENSION:") == 0) {
				dimension = atoi(buffValue);
			} else if(strcmp(buffTag, "DISPLAY_DATA_SECTION") == 0) {
				displayData = true;
			}
		} else {
			fscanf(pFile, " %f %f", &buffX, &buffY);
			town_initialize(&townBuff, ++buffId, buffX, buffY);
			instance_push(pInstance, townBuff);
			if(buffId >= dimension) {
				fscanf(pFile, " %s", buffTag);
				displayData = false;
			}
		}

	}
	pInstance->name = name;
	instance_initializeDistances(pInstance);
}

void instance_display(const Instance pInstance) {

}

void instance_push(Instance* pInstance, const Town pTown) { // TODO exception nbTown != 500. TODO Defines ou dynamique
	pInstance->towns[pInstance->nbTown++] = pTown;
}

void instance_initializeDistances(Instance* pInstance) {
	int i, j, k = 0;
	Distance buffDistance;

	for(i = 0 ; i < pInstance->nbTown; ++i) {
		for(j = 0 ; j < i ; ++j) {
			distance_new(&buffDistance, &(pInstance->towns[i-1]), &(pInstance->towns[j]));
			pInstance->distances[k] = buffDistance;
			++k;
		}
	}

	/*  Display vecteur */
	for(i = 0 ; i < util_sum(0, pInstance->nbTown-1); ++i) {
		printf("%d%d ", pInstance->distances[i].firstTown.id, pInstance->distances[i].secondTown.id);  // TODO Remplacer i/j par distances
	}

	/* Display matrix */
	for(i = 0 ; i < pInstance->nbTown ; ++i) {
		for(j = 0 ; j < pInstance->nbTown ; ++j) {
			printf("%d%d ", i,j); // TODO Remplacer i/j par distances
		}
		printf("\n");
	}
}
