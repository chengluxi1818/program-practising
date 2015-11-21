//============================================================================
// Name        : Linked.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
	LinkedList l;
	l.insert(1);
	l.insert(2);
	l.insert(2);
	l.insert(3);
	l.insert(2);
	l.print();
	//l.removeVal(2);
	//l.print();
	l.reverseR();
	l.print();



	return 0;
}
