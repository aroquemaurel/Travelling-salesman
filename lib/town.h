/**
 * \file town.h
 * \brief Programme de tests.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 21/11/2012 22:35:19
 *
 * Programme de test pour l'objet de gestion des chaînes de caractères Str_t.
 *
 */

#ifndef __TOWN
#define __TOWN
#include <stdio.h>
#include <stdlib.h>

/**
 * \struct Town town.h
 * \brief Objet des ville
 *
 * Town bla bla bla est un petit objet de gestion de chaînes de caractères. 
 * La chaîne se termine obligatoirement par un zéro de fin et l'objet 
 * connait la taille de chaîne contient !
 */
typedef struct {
	int x; /// test x
	int y; /// test y
	int id; /// test id
} Town;

/**
 * 
 * @param pTown
 * @param pId
 * @param pX
 * @param pY
 */
void town_initialize(Town* pTown, const int pId, const int pX, const int pY);
#endif

