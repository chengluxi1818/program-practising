/*
 * Template.h
 *
 *  Created on: Oct 2, 2015
 *      Author: Luxi
 */

#include <iostream>
using namespace std;

#ifndef TEMPLATE_H_
#define TEMPLATE_H_

template <typename T>
class Template {
private:
	T a;
	T b;
public:
	Template(T a, T b) {
		cout << "a = " << a << endl;
		cout << "b = " << b << endl;
	}
	virtual ~Template() {

	}
};

#endif /* TEMPLATE_H_ */
