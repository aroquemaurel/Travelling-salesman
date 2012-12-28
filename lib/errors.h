/*
 * =====================================================================================
 *
 *       Filename:  errors.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/11/2012 17:42:37
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __ERRORS
#define __ERRORS

#include <stdio.h>
#include <stdlib.h>

/**
 */
typedef struct {
	char* errorNbArguments;
	char* errorTagFNotFound;
	char* errorFileNotFound;
	char* errorNoAlgoSpecified;
	char* errorLsrNotValidParameter;
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
#endif

