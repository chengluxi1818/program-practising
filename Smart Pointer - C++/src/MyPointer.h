/*
 * MyPointer.h
 *
 *  Created on: Oct 3, 2015
 *      Author: Luxi
 */

#include <iostream>
using namespace std;

#ifndef MYPOINTER_H_
#define MYPOINTER_H_


class RefCount {
private:
	int count;
public:
	RefCount() {
		count = 0;
	}
	void hold() {
		count++;
	}
	int release() {
		return --count;
	}

};

template<typename T>
class MyPointer {
private:
	T* ptr;
	RefCount* ref;
public:
	MyPointer() {
		ptr = NULL;
		ref = new RefCount();
		ref->hold();
	}

	MyPointer(T* p) {
		ptr = p;
		ref = new RefCount();
		ref->hold();
	}

	MyPointer(const MyPointer<T>& second) {
		ptr = second.ptr;
		ref = second.ref;
		ref->hold();
	}

	T& operator* () {
		return *ptr;
	}

	T* operator-> () {
		return ptr;
	}

	const MyPointer<T>& operator= (const MyPointer<T>& second) {
		//*ptr = *(second.ptr);
		if(this != &second) {
			if(ref->release() == 0) {
				delete ref;
				delete ptr;
			}

			ref = second.ref;
			ptr = second.ptr;
			ref->hold();
		}

		return *this;
	}

	virtual ~MyPointer() {
		if(ref->release() == 0) {
			delete ptr;
			delete ref;
		}
	}
};

#endif /* MYPOINTER_H_ */
