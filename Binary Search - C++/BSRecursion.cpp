/*
 * BSRecursion.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

#include <stdio.h>


int BinarySearchR(int A[], int x, int low, int high)
{
	if(low <= high) {
		int mid = (high+low)/2;
		if(A[mid] == x) return mid;
		else if(A[mid] < x) return BinarySearchR(A, x, mid+1, high);
		else return BinarySearchR(A, x, low, mid-1);
	}

	return -1;
}

int main()
{
	int A[] = {2, 4, 5, 7, 13, 14, 15, 23};
}

