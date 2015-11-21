//============================================================================
// Name        : Abstract.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Shape.h"

using namespace std;

int main() {

	//Shape * S1;
	Rect R1(1, 2);
	Trian T1(1, 2);

	cout << R1.getArea() << endl;
	cout << T1.getArea() << endl;

	cout << R1.getMid() << endl;
	cout << T1.getMid() << endl;

	Rect R2(1, 2);
	Trian T2(1, 2);
	Shape* S1 = &R2;
	Shape* S2 = &T2;

	cout << S1->getArea() << endl;
	cout << S2->getArea() << endl;

	cout << S1->getMid() << endl;
	cout << S2->getMid() << endl;

	Shape* P1 = new Rect(3, 4);
	Shape* P2 = new Trian(3, 4);

	cout << P1->getArea() << endl;
	cout << P2->getArea() << endl;

	cout << P1->getMid() << endl;
	cout << P2->getMid() << endl;

	return 0;
}
