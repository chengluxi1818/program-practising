/*
 * FindMissingElement.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
You are given a list of n-1 integers and these integers are in the range of 1 to n.
There are no duplicates in list. One of the integers is missing in the list.
Write an efficient code to find the missing integer.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//-------------------------------------------------------------------------------
/*
1. Get the sum of numbers
       total = n*(n+1)/2
2  Subtract all the numbers from sum and
   you will get the missing number.
*/
int getMissingNoS(int a[], int n)
{
    int i, total;
    total  = (n+1)*(n+2)/2;
    for ( i = 0; i< n; i++)
       total -= a[i];
    return total;
}

//-------------------------------------------------------------------------------
/*
1) XOR all the array elements, let the result of XOR be X1.
2) XOR all numbers from 1 to n, let XOR be X2.
3) XOR of X1 and X2 gives the missing number.
*/
int getMissingNoX(int a[], int n)
{
    int i;
    int x1 = a[0]; /* For xor of all the elemets in arary */
    int x2 = 1; /* For xor of all the elemets from 1 to n+1 */

    for (i = 1; i< n; i++)
        x1 = x1^a[i];

    for ( i = 2; i <= n+1; i++)
        x2 = x2^i;

    return (x1^x2);
}


//-------------------------------------------------------------------------------
//-------------------------------------------------------------------------------
/*
Given a sorted array of n integers where each integer is in the range from 0 to m-1 and m > n.
Find the smallest number that is missing from the array.
*/

/*
Method 1 (Use Binary Search)
For i = 0 to m-1, do binary search for i in the array. If i is not present in the array then return i.

Time Complexity: O(m log n)



Method 2 (Linear Search)
If arr[0] is not 0, return 0. Otherwise traverse the input array starting from index 1,
and for each pair of elements a[i] and a[i+1],
find the difference between them. if the difference is greater than 1 then a[i]+1 is the missing number.
*/

int findFirstMissing(int array[], int start, int end) {

    if(start  > end)
      return end + 1;

    if (start != array[start])
      return start;

    int mid = (start + end) / 2;

    if (array[mid] > mid)
      return findFirstMissing(array, start, mid);
    else
      return findFirstMissing(array, mid + 1, end);
}

int main()
{
	cout << "" << endl;
}



