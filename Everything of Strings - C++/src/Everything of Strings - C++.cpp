//============================================================================
// Name        : Everything.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <vector>
#include <string>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main() {

	string test = "I hope I can get that job!";
	string test2 = " Come on!!!";

	// Copy string to char array/pointer
	char* carray = new char[test.size()+1];
	strcpy(carray, test.c_str());

	// Copy string to vector
	vector<char> cvector(test.begin(), test.end());

	// Copy vector to string
	string cstring(cvector.begin(), cvector.end());

	// String concatenation
	char* carray2 = new char[test2.size()];
	strcpy(carray2, test2.c_str());
	strcat(carray, (const char*)carray2);

	// String compare
	strcmp("apple", "orange");

	// String length, null terminator excluded.
	strlen("Let me get the job!");

	// String to integer ================================================

	// stoi: Convert string to integer
	string str_hex = "40c3";
	string str_bin = "-10010110001";
	string str_auto = "0x7f";
	int i_hex = stoi (str_hex,nullptr,16);
	int i_bin = stoi (str_bin,nullptr,2);
	int i_auto = stoi (str_auto,nullptr,0);
	// stod: Convert string to double
	// stof: string to float
	// stol: string to long
	// stold: string to long double
	// stoul: string to unsigned integer

	// Numerical to string ==============================================
	// to_string: convert numerical value to string
	string pi;
	pi = to_string(3.1415926);

	// Integer to string ================================================
	// itoa: Convert integer to string
	int cint = 123456;
	char buffer[10];
	itoa(cint, buffer, 10);

	// atoi: Convert string to integer
	int cint2 = atoi(buffer);

	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
