/*
 * CountAndSay.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
The count-and-say sequence is the sequence of integers beginning as follows:
1, 11, 21, 1211, 111221, ...

1 is read off as "one 1" or 11.
11 is read off as "two 1s" or 21.
21 is read off as "one 2, then one 1" or 1211.
Given an integer n, generate the nth sequence.

Note: The sequence of integers will be represented as a string.
*/

/*
The key point here is to find the maximum consecutive identical numbers, which means, for example:

Say there is a array like this [1, 1, 2, 3, 4, 4, 5, 5, 5],
we will need to divide the array into different segments like this,
[1, 1], [2], [3], [4, 4], [5, 5, 5]. Only in this way,
can we count the occurrence of each consecutive segments and convert them into "21 12 13 24 35".

The description of the problem is misleading and I struggled for a while,
after some searching I found the right explanation.
The number n has nothing to do with the algorithm directly, but but only control the number of iteration.

The problem can be solved by using iterative algorithm.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

string countAndSay(int n)
{
    string curr_str;

    // The initial case, when n = 1
    curr_str += '1';

    // The iterative case, when n > 1
    for (int i = 0; i < n - 1; i++)
    {
        string buffer;

        // Handle the current string
        int index = 0;
        for (int index = 0; index < curr_str.size(); ++index)
        {
            // Count the occurance of each digit
            int cnt = 1; // At least one occurance

            while (index + 1 < curr_str.size() and curr_str[index + 1] == curr_str[index])
            {
                index++;
                cnt++;
            }

            buffer.push_back(cnt + '0');
            buffer.push_back(curr_str[index]);
        }

        // Update the current string
        curr_str = buffer;
    }

    return curr_str;
}

int main()
{
	cout << "" << endl;
}



