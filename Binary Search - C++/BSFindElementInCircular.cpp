/*
 * BSFindElementInCircular.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */


#include <stdio.h>

int CircularArraySearch(int A[], int n, int x)
{
	int low = 0;
	int high = n-1;

	while(low <= high) {
		int mid = (low+high)/2;

		if(x == A[mid]) return mid;

		if(A[mid] <= A[high]) {
			if(x > A[mid] && x <= A[high])
				low = mid+1;
			else
				high = mid-1;
		}
		else {
			if(A[low] <= x && x < A[mid])
				high = mid-1;
			else
				low = mid+1;
		}
	}

	return -1;
}

int main()
{
	int A[] = {2, 4, 5, 7, 13, 14, 15, 23};
}


