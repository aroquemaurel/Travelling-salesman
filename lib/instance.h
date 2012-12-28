/*
 * =====================================================================================
 *
 *       Filename:  instance.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/11/2012 22:03:34
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __INSTANCE
#define __INSTANCE

#include <stdbool.h>
#include <string.h>

#include "util.h"
#include "town.h"
#include "distance.h"

#define N 512

/**
 */
typedef struct {
	Town towns[N];
	Distance distances[N];
	int nbTowns;
	char* name;
	char* type;
} Instance;

/**
 * 
 * @param pInstance
 */
void instance_display(const Instance pInstance);

/**
 * 
 * @param pInstance
 * @param pFile
 */
void instance_initialize(Instance* pInstance, FILE* pFile);

/**
 * 
 * @param pInstance
 * @param pTown
 */
void instance_push(Instance* pInstance, const Town pTown);

/**
 * 
 * @param pInstance
 */
void instance_initializeDistances(Instance* pInstance);

/**
 * 
 * @param pInstance
 */
void instance_displayLinearVector(Instance pInstance);

/**
 * 
 * @param pInstance
 */
void instance_displayMatrix(Instance pInstance);
#endif

