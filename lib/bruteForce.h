/**
 * \file bruteForce.h
 * \brief Programme de tests.
 * \author Antoine de Roquemaurel
 * \version 0.1
 * \date 27/12/2012 17:58:36
 *
 *  Implémentation des fonctions servant à la force brute.
 * Ces fonctions ne sont appelés que depuis le main
 *
 */

#ifndef __BRUTEFORCE
#define __BRUTEFORCE
#include "instance.h"
#include "tour.h"
#include "util.h"

/**
 * 
 * @param pInstance
 * @return 
 */
Tour bruteForce_bestPath(Instance pInstance);

#endif

