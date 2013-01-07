/**
 * \file instance.h
 * \brief Programme de tests.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 21/11/2012 22:03:34
 *
 * Programme de test pour l'objet de gestion des chaînes de caractères Str_t.
 *
 */
#ifndef __INSTANCE
#define __INSTANCE

#include <stdbool.h>
#include <string.h>

#include "util.h"
#include "town.h"
#include "distance.h"

#define N 1024

/**
 * \struct Instance instance.h
 * \brief Objet des instances
 *
 * Town bla bla bla est un petit objet de gestion de chaînes de caractères. 
 * La chaîne se termine obligatoirement par un zéro de fin et l'objet 
 * connait la taille de chaîne contient !
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
void instance_initializeDistancesMatrix(Instance* pInstance);

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

