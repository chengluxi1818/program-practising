/*
 * RightRotation.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */

/*
 * Check if one string is a rotation of other string
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
using namespace std;

bool isRightRotate(string s1, string s2)
{
	if(s1.size() != s2.size()) return false;

	string temp;
	temp.append(s1);
	temp.append(s1);
	cout << temp << endl;

	int found = temp.find(s2);
	cout << found <<endl;

	return found == -1 ? false: true;
}

bool isRightRotateC(char* str1, char* str2)
{
	int size1   = strlen(str1);
	int size2   = strlen(str2);
	char *temp;
	void *ptr;

	/* Check if sizes of two strings are same */
	if (size1 != size2)
	 return 0;

	/* Create a temp string with value str1.str1 */
	temp   = (char *)malloc(sizeof(char)*(size1*2 + 1));
	temp[0] = '\0';
	strcat(temp, str1);
	strcat(temp, str1);

	/* Now check if str2 is a substring of temp */
	ptr = strstr(temp, str2);

	free(temp); // Free dynamically allocated memory

	/* strstr returns NULL if the second string is NOT a
	substring of first string */
	if (ptr != NULL)
	return 1;
	else
	return 0;
}

int main()
{
	string s1 = "ABCD";
	string s2 = "BCDA";
	string s3 = "CDAB";

	cout << isRightRotate(s1, s3) << endl;
}


