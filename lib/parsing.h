/**
 * \file parsing.h
 * \brief Programme de tests.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 21/11/2012 17:17:24
 *
 * Programme de test pour l'objet de gestion des chaînes de caractères Str_t.
 *
 */
#ifndef __PARSING
#define __PARSING

#include <stdbool.h>
#include "util.h"
#include "errors.h"

/**
 * \enum AlgoType parsing.h
 * \brief Enumération des types d'algorithmes
 *
 * Town bla bla bla est un petit objet de gestion de chaînes de caractères. 
 * La chaîne se termine obligatoirement par un zéro de fin et l'objet 
 * connait la taille de chaîne contient !
 */
typedef enum { 
	BRUTEFORCE, 
	LOCALSEARCH_RANDOM, 
	LOCALSEARCH_SYSTEMATIC, 
	GENETIC
} AlgoType;

/**
 * 
 * @param pTab
 * @param pSize
 * @return 
 */
bool parsing_parseVerboseMode(char** pTab, const int pSize);

/**
 * 
 * @param pTab
 * @param pSize
 * @param pErrors
 * @return 
 */
char* parsing_parseFileName(char** pTab, const int pSize, Errors* pErrors);

/**
 * 
 * @param pTab
 * @param pSize
 * @param pErrors
 * @param param1AlgoType
 * @param param2AlgoType
 * @return 
 */
AlgoType parsing_algoType(char** pTab, const int pSize, Errors* pErrors, int* param1AlgoType, int* param2AlgoType);

#endif

