/*
 * =====================================================================================
 *
 *       Filename:  util.h
 *
 *    Description: Entêtes des fonctions pouvant être utiles dans tout le projet.
 *					Ce sont des fonctions simples, qui doivent être indépendantes du projet.
 *
 *        Version:  1.0
 *        Created:  19/11/2012 16:27:39
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __UTIL
#define __UTIL

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "town.h"

/**
 */
bool gVerboseMode;

/**
 * 
 * @param pArray
 * @param pSize
 * @param pSearch
 * @return 
 */
int util_searchFirstOccurenceInArray(char** pArray, const int pSize, char* pSearch);
/**
 * 
 * @param pString
 */
inline void util_displayVerboseMode(char* pString);

/**
 * 
 * @param pTab
 * @param pBegin
 * @param pEnd
 */
void util_reverseArray(Town* pTab, const int pBegin, const int pEnd);

/**
 * 
 * @param pTab1
 * @param pTab2
 * @param pSize
 * @return 
 */
bool util_arrayIsEqual(int* pTab1, int* pTab2, int pSize);

/**
 * 
 * @param pTab
 * @param pSize
 */
void util_displayArray(const int* pTab, const int pSize);

/**
 * 
 * @param pBegin
 * @param pEnd
 * @return 
 */
int util_sum(const int pBegin, const int pEnd);

/**
 * 
 * @param a
 * @param b
 */
void util_swap(int* a, int* b);

#endif