/*
 * =====================================================================================
 *
 *       Filename:  town.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/11/2012 22:35:19
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *        Company:  
 *
 * =====================================================================================
 */

#ifndef __TOWN
#define __TOWN
#include <stdio.h>
#include "util.h"
typedef struct {
	int x;
	int y;
	int id;
} Town;

void town_initialize(char* pString);
#endif

