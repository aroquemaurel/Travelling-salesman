/**
 * \file town.c
 * \brief Fonctions des villes.
 * \author Antoine de Roquemaurel
 * \date 21/11/2012 22:35:14
 *
 * implémentation des fonctions se rapportant à une ville. 
 *
 */

#include "town.h"
Town town_new(const int pId, const int pX, const int pY) {
    Town ret;
	ret.id = pId;
	ret.x = pX;
	ret.y = pY;
}