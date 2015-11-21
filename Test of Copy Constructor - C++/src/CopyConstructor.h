/*
 * CopyConstructor.h
 *
 *  Created on: Oct 20, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <vector>
using namespace std;

#ifndef COPYCONSTRUCTOR_H_
#define COPYCONSTRUCTOR_H_

class CopyConstructor {
private:
	int val;
public:
	CopyConstructor(const vector<int>& nums) {
		cout << "Base Constructor!" << endl;
		val = nums[0];
	}

	CopyConstructor(const CopyConstructor& base) {
		cout << "Base Copy Constructor!" << endl;
	}
	virtual ~CopyConstructor() {
		cout << "Base Destructor." << endl;
	}
};

class Derive : public CopyConstructor {
private:
	int val2;
public:
	Derive(const vector<int>& nums) : CopyConstructor(nums) {
		cout << "Derived Constructor!" << endl;
	}

	Derive(const Derive& derive) : CopyConstructor(derive){
		cout << "Derive Copy Constructor!" << endl;
	}

	~Derive() {
		cout << "Derive Destructor." << endl;
	}

	void test() {
/*		CopyConstructor(*this);
		cout << "test() function" << endl;
		cout << endl;*/


		Derive(*this);
		cout << "test() function" << endl;
		cout << endl;
	}
};

#endif /* COPYCONSTRUCTOR_H_ */
