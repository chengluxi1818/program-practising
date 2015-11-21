/*
 * BSFindRotate.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

#include <stdio.h>

int FindRotationCount(int A[], int n)
{
	int low = 0;
	int high = n-1;

	while(low <= high) {
		if(A[low] <= A[high]) return low;
		int mid = (low+high)/2;

		int next = (mid+1) % n;
		int prev = (mid+n-1) % n;

		if(A[mid] <= A[next] && A[mid] <= A[prev])
			return mid;

		if(A[mid] <= A[high]) high = mid-1;
		else low = mid+1;
	}

	return -1;
}

int main()
{
	int A[] = {2, 4, 5, 7, 13, 14, 15, 23};
}

