/*
 * =====================================================================================
 *
 *       Filename:  parsing.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/11/2012 17:17:24
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __PARSING
#define __PARSING

#include <stdbool.h>
#include "util.h"
#include "errors.h"

/**
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

