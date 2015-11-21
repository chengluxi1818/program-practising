/*
 * Sort1MByte.cpp
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

vector<uint8_t> sortByte(vector<uint8_t>& nums)
{
	unordered_map<uint8_t, int> hash;
	vector<uint8_t> dest;

	for(int i = 0; i < nums.size(); i++)
		hash[nums[i]]++;

	for(uint8_t j = 0; j < 256; j++) {
		if(hash.find(j) != hash.end()) {
			for(int k = 0; k < hash[j]; k++) {
				dest.push_back(j);
			}
		}
	}

	return dest;
}

int main()
{
	cout << "" << endl;
}


