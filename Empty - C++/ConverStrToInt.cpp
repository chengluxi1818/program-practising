/*
 * ConverStrToInt.cpp
 *
 *  Created on: Aug 6, 2015
 *      Author: Luxi
 */


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int converStr(string s)
{
	int result = 0;

	for(int i = s.size()-1; i >= 0; i--) {
		result *= 10;
		int temp = (int)s[i] - 48;
		result = result + temp;
	}

	return result;
}

int main()
{
	cout << "" << endl;
}

