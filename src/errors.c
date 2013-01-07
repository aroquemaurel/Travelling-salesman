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
    
    if(pErrors.errorMissingParameterLsr != NULL)
		printf("%s", pErrors.errorMissingParameterLsr);
        
    if(pErrors.errorMissingParameterLsnr != NULL)
		printf("%s", pErrors.errorMissingParameterLsnr);
        
    if(pErrors.errorMissingParameterGa != NULL)
		printf("%s", pErrors.errorMissingParameterGa);        
    
    if(pErrors.errorNoValidParameterLsr != NULL)
		printf("%s", pErrors.errorNoValidParameterLsr);        
    
    if(pErrors.errorNoValidParameterLsnr != NULL)
		printf("%s", pErrors.errorNoValidParameterLsnr);        

    if(pErrors.errorNoValidParameterGa != NULL)
		printf("%s", pErrors.errorNoValidParameterGa);        
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

void errors_setMissingParameterLsr(Errors* pErrors) {
    ++pErrors->nbErrors;
    pErrors->errorMissingParameterLsr = "ERREUR: Paramètre manquant après -lsr\n";
}

void errors_setMissingParameterLsnr(Errors* pErrors) {
    ++pErrors->nbErrors;
    pErrors->errorMissingParameterLsnr = "ERREUR: Paramètre manquant après -lsnr\n";
}

void errors_setMissingParameterGa(Errors* pErrors) {
    ++pErrors->nbErrors;
    pErrors->errorMissingParameterGa = "ERREUR: Paramètre manquant après -ga\n";
}

void errors_setNoValidParameterLsr(Errors* pErrors) {
    ++pErrors->nbErrors;
    pErrors->errorNoValidParameterLsr = "ERREUR: Paramètre non valide après -lsr\n";
}

void errors_setNoValidParameterLsnr(Errors* pErrors) {
    ++pErrors->nbErrors;
    pErrors->errorNoValidParameterLsnr = "ERREUR: Paramètre non valide après -lsnr\n";
}

void errors_setNoValidParameterGa(Errors* pErrors) {
    ++pErrors->nbErrors;
    pErrors->errorNoValidParameterGa = "ERREUR: Paramètre non valide après -ga\n";
}
