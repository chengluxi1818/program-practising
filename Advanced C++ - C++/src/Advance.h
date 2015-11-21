/*
 * Advance.h
 *
 *  Created on: Oct 2, 2015
 *      Author: Luxi
 */

#include <iostream>
using namespace std;

#ifndef ADVANCE_H_
#define ADVANCE_H_

class Advance {
private:
	int x;
	int y;
public:
	// Original constructor
	Advance() {
		cout << "This is the default constructor." << endl;
	}
	// Overloaded constructor
	Advance(int a) {
		cout << "This is the overloaded constructor. A = " << a << endl;
	}
	// Member initialization
	Advance(int x, int y) : x(x), y(y) {
		cout << "This is the overloaded constructor. X = " << x << ", Y = " << y << endl;
	}
	// Copy constructor
	Advance(const Advance& second) {
		cout << "This is the copy constructor." << endl;
		x = second.x;
		y = second.y;
	}

	// Operator overloading
	Advance operator+ (const Advance& second) {
		Advance temp;
		temp.x = x + second.x;
		temp.y = y + second.y;
		return temp;
	}
	// Assignment operator overloading
	Advance& operator= (const Advance& second) {
		this->x = second.x;
		this->y = second.y;
		//x = second.x;
		//y = second.y;
		cout << "Assignment operator overloading." << endl;
		return *this;
	}

	// Const member functions
	void get() const {
		//x++;
		//y--;
	}

	void printXY() {
		cout << "x = " << x << endl;
		cout << "y = " << y << endl;
	}

	virtual ~Advance() {
		cout << "Destructor called." << endl;
	}
};

#endif /* ADVANCE_H_ */
