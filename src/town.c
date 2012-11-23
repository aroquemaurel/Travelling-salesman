/*
 * =====================================================================================
 *
 *       Filename:  town.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/11/2012 22:35:14
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *
 * =====================================================================================
 */

#include "town.h"
#include "string.h"
void town_initialize(char* pString) {
	char** test;
	int i=0;
	int size;
	test = util_split(pString, ' ', &size);
	while(test[i] != 0 && i < size-1) { // TODO magicNumber
		++i;
		if(strcmp(test[i], "\0") != 0) {

		}
	//		printf("%s|", test[i]);
	}
}
