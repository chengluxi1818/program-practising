/*
 * RemoveVowel.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
 * Remove all the vowels in a string, i.e. remove a, e, i, o, u
 *
 */

#include <iostream>
#include <string>

using namespace std;


string removeVowel(string s)
{
	string dest;
	string v = "aeiouAEIOU";

	for (int i = 0; i < s.length(); i++) {
		char c = s.at(i);
		if (v.find(c) == -1)
			dest.append(&c);
	}

	return dest;
}

int main()
{
	cout << "" << endl;
}




