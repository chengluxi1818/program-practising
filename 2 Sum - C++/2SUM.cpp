/*
 * 2SUM.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */
/*

Given an array of integers, find two numbers such that they add up to a specific target number.

The function twoSum should return indices of the two numbers such that they add up to the target, where index1 must be less than index2. Please note that your returned answers (both index1 and index2) are not zero-based.

You may assume that each input would have exactly one solution.

Input: numbers={2, 7, 11, 15}, target=9
Output: index1=1, index2=2
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

#include <vector>
#include <unordered_map>

using namespace std;

//-----------------------------------------------------------------------------------
// Normal Two Sum
vector<int> twoSum(vector<int>& nums, int target)
{
	unordered_map<int, int> hash;
	vector<int> out;

	for(int i = 0; i < nums.size(); i++) {
		if(hash.find(target-nums[i]) == hash.end()) {
			hash[nums[i]] = i;
		}
		else {
			out.push_back(hash[target-nums[i]] + 1);
			out.push_back(i+1);
		}
	}

	return out;
}

//--------------------------------------------------------------------------------------
// Get all combinations
vector<vector<int>> twoSumAll(vector<int>& nums, int target)
{
	unordered_map<int, int> hash;
	vector<int> out;
	vector<vector<int>> result;

	for(int i = 0; i < nums.size(); i++) {
		if(hash.find(target-nums[i]) == hash.end()) {
			hash[nums[i]] = i;
		}
		else {
			out.push_back(hash[target-nums[i]] + 1);
			out.push_back(i+1);
			result.push_back(out);
		}
	}

	return result;
}

//----------------------------------------------------------------------------------------
// All combinations include same index
vector<vector<int>> twoSumSame(vector<int>& nums, int target)
{
	unordered_map<int, int> hash;
	vector<int> out;
	vector<vector<int>> result;

	for(int i = 0; i < nums.size(); i++) {
		if(nums[i] * 2 == target) {
			out.push_back(i+1);
			out.push_back(i+1);
		}
		else if(hash.find(target-nums[i]) == hash.end()) {
			hash[nums[i]] = i;
		}
		else {
			out.push_back(hash[target-nums[i]] + 1);
			out.push_back(i+1);
			result.push_back(out);
		}
	}

	return result;
}


int main()
{
	cout << "" << endl;
}


