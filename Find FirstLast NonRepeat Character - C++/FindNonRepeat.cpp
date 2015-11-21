/*
 * FindNonRepeat.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */

/*

Given a string, find the first non-repeating character in it. For example,
if the input string is ¡°GeeksforGeeks¡±, then output should be ¡®f¡¯ and if input string is ¡°GeeksQuiz¡±,
then output should be ¡®G¡¯.

We can use string characters as index and build a count array. Following is the algorithm.

1) Scan the string from left to right and construct the count array.
2) Again, scan the string from left to right and check for count of each
 character, if you find an element who's count is 1, return it.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>

#include <unordered_map>

using namespace std;
//--------------------------------------------------------------------------------------
#define NO_OF_CHARS 256

int *getCharCountArray(char *str)
{
   int *count = (int *)calloc(sizeof(int), NO_OF_CHARS);
   int i;
   for (i = 0; *(str+i);  i++)
      count[*(str+i)]++;
   return count;
}

/* The function returns index of first non-repeating
   character in a string. If all characters are repeating
   then returns -1 */
int firstNonRepeatingC(char *str)
{
  int *count = getCharCountArray(str);
  int index = -1, i;

  for (i = 0; *(str+i);  i++)
  {
    if (count[*(str+i)] == 1)
    {
      index = i;
      break;
    }
  }

  free(count); // To avoid memory leak
  return index;
}

//---------------------------------------------------------------------------------------
char firstNonRepeating(string s)
{
	unordered_map<char, int> mp;
	int n=s.length();


	for(int i = n-1; i >=0 ;i--)
	{
		mp[s[i]]++;
		cout << mp[s[i]] << " ";
	}

	for(int i = n-1; i >= 0; i--) {
		if(mp[s[i]] == 1)
			return s[i];
	}

	return '\0';
}

//---------------------------------------------------------------------------------------
// Find the non-repeating objects, find all of them
struct Object {
	int val;
};

char firstNonRepeatingObject(vector<Object> s)
{
	unordered_map<Object, int> mp;
	int n=s.size();


	for(int i = n-1; i >=0 ;i--)
	{
		mp[s[i]]++;
		cout << mp[s[i]] << " ";
	}

	for(int i = n-1; i >= 0; i--) {
		if(mp[s[i]] == 1)
			return s[i];
	}

	return '\0';
}

int main()
{
	cout << firstNonRepeating("aaebbbbdcccccc") << endl;
}


