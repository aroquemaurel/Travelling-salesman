/**
 * \file bruteForce.c
 * \brief Fonctions utiles.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 21/11/2012 17:42:31
 *
 * Entêtes des fonctions pouvant être utiles dans tout le projet. 
 * Ce sont des fonctions simples, qui doivent être indépendantes du projet.
 *
 */

#include "errors.h"
void errors_initialize(Errors* pErrors) {
	pErrors->errorNbArguments = NULL;
	pErrors->errorTagFNotFound = NULL;
	pErrors->errorFileNotFound = NULL;
	pErrors->errorNoAlgoSpecified = NULL;
	pErrors->errorLsrNotValidParameter = NULL;
	pErrors->nbErrors = 0;
}
void errors_displayErrorsMessage(const Errors pErrors) {
	printf("%d erreur%s lors de la saisie de la commande\n",
				pErrors.nbErrors, (pErrors.nbErrors > 1)? "s" : "");
	printf("Usage: ./travellingSalesman [-v] -f file -bf|-lsr nbEssai|-lsnr nbEssai|-ga nbGeneration tauxMutation \n\n");				

	if(pErrors.errorNbArguments != NULL)
		printf("%s", pErrors.errorNbArguments);

	if(pErrors.errorTagFNotFound!= NULL)
		printf("%s", pErrors.errorTagFNotFound);
	
	if(pErrors.errorFileNotFound != NULL)
		printf("%s", pErrors.errorFileNotFound);
	
	if(pErrors.errorNoAlgoSpecified != NULL)
		printf("%s", pErrors.errorNoAlgoSpecified);
	
	if(pErrors.errorLsrNotValidParameter != NULL)
		printf("%s", pErrors.errorLsrNotValidParameter);
}

void errors_setNbArguments(Errors* pErrors) {
	++pErrors->nbErrors;
	pErrors->errorNbArguments = "ERREUR: TDO\n"; //TODELETE
}

void errors_setTagFNotFound(Errors* pErrors) {
	++pErrors->nbErrors;
	pErrors->errorTagFNotFound = "ERREUR: Balise -f non trouvée\n";
}

void errors_setFileNotFound(Errors* pErrors, char* fileName) {
	++pErrors->nbErrors;
	pErrors->errorFileNotFound = "ERREUR: Fichier non trouvée\n";
}

void errors_setNoAlgoSpecified(Errors* pErrors) {
	++pErrors->nbErrors;
	pErrors->errorNoAlgoSpecified = "ERREUR: Algorithme non spécifié\n";
}

void errors_setLsrNotValidParameter(Errors* pErrors) {
	++pErrors->nbErrors;
	pErrors->errorLsrNotValidParameter = "ERREUR: Paramètre lsr non valid\n";
}

