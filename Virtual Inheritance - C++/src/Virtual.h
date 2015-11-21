/*
 * Virtual.h
 *
 *  Created on: Oct 29, 2015
 *      Author: Luxi
 */

#include <iostream>
using namespace std;

#ifndef VIRTUAL_H_
#define VIRTUAL_H_

class Base {
public:
	Base() {

	}

	void Function() {
		cout << "This is Base Class" << endl;
	}

	virtual ~Base() {

	}
};

class ChildA: virtual public Base {
public:
	/*void Function() {
		cout << "This is Child A" << endl;
	}*/
};

class ChildB: virtual public Base {
public:
	/*void Function() {
		cout << "This is Child B" << endl;
	}*/
};

class Grand: public ChildA, public ChildB {

};


#endif /* VIRTUAL_H_ */
