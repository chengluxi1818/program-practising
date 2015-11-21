/*
 * KthSamllLarge.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */
/*

Given an array and a number k where k is smaller than size of array,
we need to find the k¡¯th smallest element in the given array.
It is given that ll array elements are distinct.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <algorithm>

using namespace std;

// Function to return k'th smallest element in a given array
int kthSmallest(int arr[], int n, int k)
{
    // Sort the given array
    sort(arr, arr+n);

    // Return k'th smallest element in the sorted array
    return arr[k-1];
    // k'th largest
    // return arr[n-1-(k-1)] = arr[n-k];
}

int main()
{
	cout << "" << endl;
}


