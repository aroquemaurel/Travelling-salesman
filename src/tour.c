/*
 * =====================================================================================
 *
 *       Filename:  tour.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  21/11/2012 22:04:08
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Antoine de Roquemaurel (), 
 *
 * =====================================================================================
 */
#include "tour.h"

bool tour_nextPermutation(int* pPermutation, const int pSize) {
	int i;
	bool found=false;
	int k=-1; 

	while(pPermutation[k] >= pPermutation[k+1] && k >= 0) {
		--k;
	}

	if(k != -1) {
		found = true;
		while(pPermutation[k] < pPermutation[i] && i > k) {
			--i;
		}
		pPermutation[k] ^= pPermutation[i] ^= pPermutation[k] ^= pPermutation[i];
		
		util_reverseArray(pPermutation, k+1, pSize);
	}

	return true;
}
