/*
 * BSTFindoOccurence.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */


int BinarySearchFisrt(int A[], int x, int n)
{
	int low = 0;
	int high = n - 1;
	int result = -1;

	while(low <= high) {
		int mid = (low+high)/2;
		if(A[mid] == x) {
			result = mid;
			high = mid-1;
		}
		else if(A[mid] < x) low = mid+1;
		else high = mid-1;
	}j3wwwwwwwwwwww34e43wswwqa34ea
	return result;
}

int BinarySearchLast(int A[], int x, int n)
{
	int low = 0;
	int high = n - 1;
	int result = -1;

	while(low <= high) {
		int mid = (low+high)/2;
		if(A[mid] == x) {
			result = mid;
			low = mid+1;
		}
		else if(A[mid] < x) low = mid+1;
		else high = mid-1;
	}
	return result;
}

int NumberOfOccurrences(int A[], int x, int n)
{
	return BinarySearchLast(A, x, n) - BinarySearchFisrt(A, x, n) + 1;
}

int main()
{
	int A[] = {2, 4, 5, 7, 13, 14, 15, 23};
}

