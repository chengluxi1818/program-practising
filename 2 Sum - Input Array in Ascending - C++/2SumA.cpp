/*
 * 2SumA.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <vector>

using namespace std;

int Bsearch(vector<int> A, int key, int start)
{
	int L = start, R = A.size()-1;
	while(L < R) {
		int M = (L+R)/2;
		if(A[M] < key)
			L = M+1;
		else
			R = M;
	}

	return (L == R && A[L] == key) ? L : -1;
}

vector<int> twoSumA(vector<int> nums, int target)
{
	vector<int> out;

	for(int i = 0; i < nums.size(); i++) {
		int j = Bsearch(nums, target - nums[i], i+1);
		if(j != -1) {
			out.push_back(i+1);
			out.push_back(j+1);
		}
	}

	return out;
}

int main()
{
	cout << "" << endl;
}


