//============================================================================
// Name        : Virtual.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Virtual.h"
using namespace std;

int main() {
	Grand test;
	Base base;
	base.Function();
	ChildA a;
	ChildB b;
	a.Function();
	b.Function();
	test.Function();

	return 0;
}
