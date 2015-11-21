//============================================================================
// Name        : Pascal.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================


/*
Given an index k, return the kth row of the Pascal's triangle.

For example, given k = 3,
Return [1,3,3,1].

Note:
Could you optimize your algorithm to use only O(k) extra space?
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> getRow(int rowIndex) {
        vector<long> A(rowIndex+1, 0);
        vector<int> B(rowIndex+1, 0);
        //A.resize(rowIndex+1);
        A[0] = 1;
        B[0] = 1;

        for(int i = 1; i <= rowIndex; i++) {
            A[i] = (A[i-1] * (rowIndex - i + 1)) / i;
            B[i] = (int)A[i];
        }

        A.clear();
        return B;
}

int main() {

	vector<unsigned int> test;
	int rowIndex = 3;

	test = getRow(rowIndex);

	for(int i = 0; i <= rowIndex; i++)
		cout << test[i] << " ";

	return 0;
}
