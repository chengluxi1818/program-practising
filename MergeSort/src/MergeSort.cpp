/*
 * MergeSort.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <vector>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*vector<int> Merge(vector<int>& L, vector<int>& R)
{
	vector<int> N;

	int lL = L.size();
	int lR = R.size();

	int i = 0, j = 0, k = 0;

	while(i < lL && j < lR) {
		if(L[i] < R[j]) {
			N.push_back(L[i]);
			i++;
		}
		else {
			N.push_back(R[j]);
			j++;
		}
	}

	while(i < lL) {
		N.push_back(L[i]);
		i++;
	}

	while(j < lR) {
		N.push_back(R[j]);
		j++;
	}

	return N;
}

vector<int> MergeSort(vector<int>& nums)
{
	int length = nums.size();
	int mid = length / 2;

	vector<int> result;

	vector<int> left(nums.begin(), nums.begin()+mid-1);
	vector<int> right(nums.begin()+mid, nums.end());

	MergeSort(left);
	MergeSort(right);
	result =  Merge(left, right);

	return result;
}*/

// Function to Merge Arrays L and R into A.
// lefCount = number of elements in L
// rightCount = number of elements in R.
void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
	int i,j,k;

	// i - to mark the index of left aubarray (L)
	// j - to mark the index of right sub-raay (R)
	// k - to mark the index of merged subarray (A)
	i = 0; j = 0; k =0;

	while(i<leftCount && j< rightCount) {
		if(L[i]  < R[j]) A[k++] = L[i++];
		else A[k++] = R[j++];
	}
	while(i < leftCount) A[k++] = L[i++];
	while(j < rightCount) A[k++] = R[j++];
}

// Recursive function to sort an array of integers.
void MergeSort(int *A,int n) {
	int mid,i, *L, *R;
	if(n < 2) return; // base condition. If the array has less than two element, do nothing.

	mid = n/2;  // find the mid index.

	// create left and right subarrays
	// mid elements (from index 0 till mid-1) should be part of left sub-array
	// and (n-mid) elements (from mid to n-1) will be part of right sub-array
	L = (int*)malloc(mid*sizeof(int));
	R = (int*)malloc((n- mid)*sizeof(int));

	// L = (int*) realloc (temp, mid*sizeof(int));
	// L = temp;
	// R = (int*) realloc (temp, (n-mid)*sizeof(int));
	// R = temp;

	for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
	for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray

	MergeSort(L,mid);  // sorting the left subarray
	MergeSort(R,n-mid);  // sorting the right subarray
	Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
        free(L);
        free(R);
}


int main()
{
/*	int A[] = {6,2,3,1,9,10,15,13,12,17};
	vector<int> B(A, A+10);
	vector<int> result;*/

   vector<int> v;

   v.push_back(38);
   v.push_back(27);
   v.push_back(43);
   v.push_back(3);
   v.push_back(9);
   v.push_back(82);
   v.push_back(10);

   int* A = &v[0];

	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

	MergeSort(A, v.size());

	for(int i = 0; i < v.size(); i++) cout << v[i] << " ";

	cout << "" << endl;
}



