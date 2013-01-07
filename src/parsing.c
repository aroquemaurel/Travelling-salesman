/**
 * \file bruteForce.c
 * \brief Fonctions utiles.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 21/11/2012 17:17:18
 *
 * Entêtes des fonctions pouvant être utiles dans tout le projet. 
 * Ce sont des fonctions simples, qui doivent être indépendantes du projet.
 *
 */

#include "parsing.h"

bool parsing_parseVerboseMode(char** pTab, const int pSize) {
	return (util_searchFirstOccurenceInArray(pTab, pSize, "-v") != -1);
}

char* parsing_parseFileName(char** pTab, const int pSize, Errors* pErrors) {
	int posTiretF = util_searchFirstOccurenceInArray(pTab, pSize, "-f");
	if(posTiretF == -1) {
		errors_setTagFNotFound(pErrors);
		return (NULL);
	}

	return (pTab[posTiretF+1]);
}

void parsing_algoType(char** pTab, const int pSize, Errors* pErrors, Algo* algos) {
	int positionTag;
    int numberAlgo = 0;
	if(util_searchFirstOccurenceInArray(pTab, pSize, "-bf") != -1) {
		algos[numberAlgo].type = BRUTEFORCE;	
        algos[numberAlgo].firstParameter = algos[numberAlgo].secondParameter = -1;
        numberAlgo++;
	} 
    
    if((positionTag = util_searchFirstOccurenceInArray(pTab, pSize, "-lsr")) != -1) {
		if(pTab[positionTag+1] == NULL) {
            errors_setMissingParameterLsr(pErrors);
				//TODO Paramètre manquant 
		} else if(atoi(pTab[positionTag+1]) == 0) {
            errors_setNoValidParameterLsr(pErrors);
			/// TODO Erreur paramètre après -lsr non entier ou = 0	
		} else {
			algos[numberAlgo].type = LOCALSEARCH_RANDOM ;	
            algos[numberAlgo].firstParameter = atoi(pTab[positionTag+1]);
            numberAlgo++;
		}
	} 
    
    if((positionTag = util_searchFirstOccurenceInArray(pTab, pSize, "-lsnr")) != -1) {
		if(pTab[positionTag+1] == NULL) {
            errors_setMissingParameterLsnr(pErrors);
				//TODO Paramètre manquant 
		} else if(atoi(pTab[positionTag+1]) == 0) {
            errors_setNoValidParameterLsnr(pErrors);
			/// TODO Erreur paramètre après -lsnr non entier ou = 0	
		} else {
			algos[numberAlgo].type =LOCALSEARCH_SYSTEMATIC;	
            algos[numberAlgo].firstParameter = atoi(pTab[positionTag+1]);
            numberAlgo++;
		}
        
	} 
    
    if((positionTag = util_searchFirstOccurenceInArray(pTab, pSize, "-ga")) != -1) {
		if(pTab[positionTag+1] == NULL) {
				//TODO Paramètre manquant 
		} else if(atoi(pTab[positionTag+1]) == 0) {
			/// TODO Erreur paramètre après -lsnr non entier ou = 0	
		} else {
            algos[numberAlgo].firstParameter =  atoi(pTab[positionTag+1]);
			if(pTab[positionTag+2] == NULL) {
				//TODO Paramètre manquant 
			} else if(atoi(pTab[positionTag+2]) == 0) {
				// TODO Erreur paramètre après -lsnr non entier ou = 0	
			} else {
				algos[numberAlgo].secondParameter = atoi(pTab[positionTag+2]);
				algos[numberAlgo].type = GENETIC;
                numberAlgo++;
			}
		}
	} 
    
    if(numberAlgo == 0) {
		errors_setNoAlgoSpecified(pErrors);
	}
    
    algos[numberAlgo].type = END; //Flag de fin
}