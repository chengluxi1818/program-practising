/*
 * Shape.h
 *
 *  Created on: Oct 2, 2015
 *      Author: Luxi
 */

#include <iostream>
using namespace std;

#ifndef SHAPE_H_
#define SHAPE_H_

class Shape {
protected:
	int width;
	int height;
public:
	Shape() {
		cout << "Default constructor" << endl;
	}

	Shape(int w, int h) {
		width = w;
		height = h;
		cout << "Constructor of Base Class" << endl;
	}

	// Pure virtual function
	virtual int getArea()  = 0;
	// Virtual functions
	virtual int getMid() {
		cout << "Virtual functions called." << endl;
		return width + height;
	}

	virtual ~Shape() {
		cout << "Destructor of Base Class" << endl;
	}
};

class Rect : public Shape {
public:
	Rect(int w, int h) : Shape(w, h) {
		cout << "Constructor of Rect Class" << endl;
	}

	int getArea() {
		cout << "getArea() of Rect" << endl;
		return width*height;
	}

	int getMid() {
		cout << "getMid() of Rect" << endl;
		return (width + height) / 2;
	}

	~Rect() {
		cout << "Destructor of Rect Class." << endl;
	}
};

class Trian : public Shape {
public:
	Trian(int w, int h) : Shape() {
		height = h;
		width = w;
		cout << "Constructor of Trian Class" << endl;
	}

	int getArea() {
		cout << "getArea() of Trian" << endl;
		return width*height/2;
	}

	int getMid() {
		cout << "getMid() of Trian" << endl;
		return (width + height) / 3;
	}

	~Trian() {
		cout << "Destructor of Trian Class." << endl;
	}
};

#endif /* SHAPE_H_ */
