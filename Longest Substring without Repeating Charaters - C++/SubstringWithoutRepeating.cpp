/*
 * SubstringWithoutRepeating.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Given a string, find the length of the longest substring without repeating characters. For example,
the longest substring without repeating letters
for "abcabcbb" is "abc", which the length is 3.
For "bbbbb" the longest substring is "b", with the length of 1.
*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

/*
The basic idea is to use an array "pos" to save
the most recent postion at which each character occurs (assume ASICC 128 characters),
and use another index "last" to save the first index of the last occured repeating case
(i.e. save i in the case s[i] == s[j] && i=0).
If so, a repeating case happens, then we need to check if
the first index of this repeating case is less than the first index of the last processed repeating case
(e.g. 123421, the first index of the repeating "1" case is 0, which is less than 1,
which is the first index of the repeating "2" case),
if that is the case, we just need to update pos[s[i]] and
don't need to update res since the starting point of the current non-repeating substring is
after the first index of this repeating case (i.e.
the starting point of the current non-repeating substring starts from "3" (index is last+1 = 1+1=2)). Otherwise (if the first index of this repeating case is less than the first index of the last processed repeating case
(e.g. 1253423 the "3" repeating case, the first "3" is after the first "2")),
then the current non-repeating substring (starting from index last+1) ends at index i,
so we have to update res (i-last-1) and
last (the first index of the current repeating case, last = pos[s[i]]).
The time complexity is O(n) and space is O(1)
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> pos(129,-1);
        int res =0, last = -1, sSize = s.size();
        int i;

        if(sSize>0)
        {
            for( i=0;i<sSize; i++)
            {
                if(pos[s[i]] == -1)
                    pos[s[i]] = i; // if it is the first time that character s[i] occures
                else
                { // if it is a new repeating case
                    if(pos[s[i]] > last)
                    { // if the first index of this repeating case is larger than that of the last processed repeating case
                        res = max(res, i - last - 1); // update the maximum non-repeating substring length
                        last = pos[s[i]]; // update the starting index of the current non-repeating substring
                    }
                    pos[s[i]] = i; // update the most recent index of s[i]
                }
            }
            res = max(res, sSize - last - 1); // at last, we need to check the current non-repeating substring end at the end of s

        }
        return res;
    }
};

int main()
{
	cout << "" << endl;
}


