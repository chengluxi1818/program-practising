/*
 * CheckGreyCode.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

bool grayCheck(char a, char b)
{
	char x = (char)(a^b);
	return x!=0 && ((char)(x&(x-1)==0));
}

int main()
{
	cout << "" << endl;
}


