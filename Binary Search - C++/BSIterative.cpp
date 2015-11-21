/*
 * BSIterative.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

#include <stdio.h>

int BinarySearchI(int A[], int x, int n)
{
	int low = 0;
	int high = n - 1;

	while(low <= high) {
		int mid = (low+high)/2;
		if(A[mid] == x) return mid;
		else if(A[mid] < x) low = mid+1;
		else high = mid-1;
	}
	return -1;
}


int main()
{
	int A[] = {2, 4, 5, 7, 13, 14, 15, 23};
}


