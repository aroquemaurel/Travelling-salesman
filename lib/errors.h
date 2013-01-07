/**
 * \file errors.h
 * \brief Programme de tests.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 21/11/2012 17:42:37
 *
 * Programme de test pour l'objet de gestion des chaînes de caractères Str_t.
 *
 */

#ifndef __ERRORS
#define __ERRORS

#include <stdio.h>
#include <stdlib.h>

/**
 * \struct Errors errors.h
 * \brief Objet des erreurs
 *
 * Town bla bla bla est un petit objet de gestion de chaînes de caractères. 
 * La chaîne se termine obligatoirement par un zéro de fin et l'objet 
 * connait la taille de chaîne contient !
 */
typedef struct {
	char* errorNbArguments;
	char* errorTagFNotFound;
	char* errorFileNotFound;
	char* errorNoAlgoSpecified;
	char* errorLsrNotValidParameter;
    char* errorMissingParameterLsr;
    char* errorMissingParameterLsnr;
    char* errorMissingParameterGa;
    char* errorNoValidParameterLsr;
    char* errorNoValidParameterLsnr;
    char* errorNoValidParameterGa;
	int nbErrors;
} Errors;

/**
 * 
 * @param pErrors
 */
void errors_initialize(Errors* pErrors);

/**
 * 
 * @param pErrors
 */
void errors_displayErrorsMessage(const Errors pErrors);

/**
 * 
 * @param pErrors
 */
void errors_setNbArguments(Errors* pErrors);

/**
 * 
 * @param pErrors
 */
void errors_setTagFNotFound(Errors* pErrors);

/**
 * 
 * @param pErrors
 * @param fileName
 */
void errors_setFileNotFound(Errors* pErrors, char* fileName);

/**
 * 
 * @param pErrors
 */
void errors_setNoAlgoSpecified(Errors* pErrors);

/**
 * 
 * @param pErrors
 */
void errors_setLsrNotValidParameter(Errors* pErrors);
void errors_setNoValidParameterLsnr(Errors* pErrors);
void errors_setNoValidParameterLsr(Errors* pErrors);
void errors_setMissingParameterGa(Errors* pErrors);
void errors_setMissingParameterLsnr(Errors* pErrors);
void errors_setMissingParameterLsr(Errors* pErrors);

#endif

