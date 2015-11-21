//============================================================================
// Name        : Test.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <vector>

#include "CopyConstructor.h"
using namespace std;

int main() {
	vector<int> nums(1, 100);

	Derive foo(nums);
	cout << endl;
	foo.test();

	return 0;
}
