/*
 * DuplicateWithinK.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */
/*

Given an unsorted array that may contain duplicates.
Also given a number k which is smaller than size of array.
Write a function that returns true if array contains duplicates within k distance.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <unordered_set>
#include <vector>

using namespace std;

bool checkDuplicatesWithinK(vector<int> arr, int k)
{
	// Creates an empty hashset
	unordered_set<int> set;

	// Traverse the input array
	for (int i=0; i<arr.size(); i++)
	{
		// If already present n hash, then we found
		// a duplicate within k distance
		if (set.find(arr[i]) != set.end())
		   return true;

		// Add this item to hashset
		set.insert(arr[i]);

		// Remove the k+1 distant item
		if (i >= k)
		  set.erase(arr[i-k]);
	}
	return false;
}

int main()
{
	cout << "" << endl;
}



