/*
 * ReverseWordinString.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */
/*

Given an input string, reverse the string word by word.

For example,
Given s = "the sky is blue",
return "blue is sky the".

Update (2015-02-12):
For C programmers: Try to solve it in-place in O(1) space.

Clarification:
What constitutes a word?
A sequence of non-space characters constitutes a word.
Could the input string contain leading or trailing spaces?
Yes. However, your reversed string should not contain leading or trailing spaces.
How about multiple spaces between two words?
Reduce them to a single space in the reversed string.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

// function to reverse any part of string from i to j (just one word or entire string)
void reverseword(string &s, int i, int j){
    while(i<j){
      char t=s[i];
      s[i++]=s[j];
      s[j--]=t;
    }
}

void reverseWords(string &s) {

    int i=0, j=0;
    int l=0;
    int len=s.length();
    int wordcount=0;

    while(true){
        while(i<len && s[i] == ' ') i++;  // skip spaces in front of the word
        if(i==len) break;	// if all ' ', break the loop;
        if(wordcount) s[j++]=' '; // paste a ' ' after each word
        l=j;
        while(i<len && s[i] != ' ') {s[j]=s[i]; j++; i++;}
        reverseword(s,l,j-1);                // reverse word in place
        wordcount++;

    }

    s.resize(j);                           // resize result string
    reverseword(s,0,j-1);                  // reverse whole string
}

int main()
{
	cout << "" << endl;
}


