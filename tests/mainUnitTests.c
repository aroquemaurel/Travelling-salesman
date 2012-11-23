/*
 * =====================================================================================
 *
 *       Filename:  mainUtil.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  19/11/2012 19:26:00
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *
 * =====================================================================================
 */
#include "testUtil.h"

int main(int argc, char *argv[]) { 
	int test[] = {0,1,2,3,4,5,6,7,8,9,10};
	int i=0;
	test_searchFirstOccurenceInArray(1);
	test_searchFirstOccurenceInArray(2);
	test_searchFirstOccurenceInArray(3);
	test_searchFirstOccurenceInArray(4);
	test_searchFirstOccurenceInArray(5);

	util_reverseArray(test, 1,3);
	for(i=0 ; i < 11 ; ++i) {
		printf("%d ", test[i]);
	}
	return 0;
}
