/*
 * FindCommonArrays.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <unordered_map>

using namespace std;

//--------------------------------------------------------------------------------------
// Brute force
vector<int> findCommonsV(vector<int>& a1, vector<int>& a2)
{
	vector<int> result;

	for(int i = 0; i < a1.size(); i++)
		for(int j = 0; j < a2.size(); j++) {
			if(a1[i] == a2[j])
				result.push_back(a1[i]);
		}
}

//--------------------------------------------------------------------------------------
// Hash Map
vector<int> findCommons(vector<int>& a1, vector<int>& a2)
{
	vector<int> result;
	unordered_map<int, int> hash;

	for(int i = 0; i < a2.size(); i++) {
		hash[a2[i]] = i;
	}

	for(int i = 0; i < a1.size(); i++) {
		if(hash.find(a1[i]) != hash.end()) {
			result.push_back(a1[i]);
		}
	}
}

//--------------------------------------------------------------------------------------
// If two arrays are sorted
vector<int> findCommonsS(vector<int>& a1, vector<int>& a2)
{
	vector<int> result;

	int i = 0, j = 0;

	while(i < a1.size() && j < a2.size()) {
		if(a1[i] < a2[j]) i++;
		else if(a1[i] > a2[j]) j++;
		else {
			result.push_back(a1[i]);
			i++;
			j++;
		}
	}

	return result;
}


int main()
{
	cout << "" << endl;
}




