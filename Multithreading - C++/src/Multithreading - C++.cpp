//============================================================================
// Name        : Multithreading.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
using namespace std;

vector<int> all;
mutex mu;

void printA() {
	cout << "This is printA()." << endl;
}

void printB() {
	cout << "This is printB()." << endl;
}

void increase(int i) {
	all.push_back(i);
	cout << "This is thread " << i << endl;
}

void loop(int a, int b) {
	mu.lock();
	for(int i = a; i <= b; i++) {
		cout << " " << i << " ";
	}
	mu.unlock();
}

int main() {

/*	thread a(printA);

	thread b;
	b = thread(printB);

	b.join();
	a.join();*/

/*	int num = 100;

	thread t[num];
	for(int i = 0; i < num; i++) {
		t[i] = thread(increase, i);
	}

	for(int i = num-1; i >= 0; i--) {
		cout << all[i] << " ";
		t[i].join();
	}
	cout << endl;*/

	int a = 0;
	int b = 99;
	int c = 100;
	int d = 199;
	thread t(loop, a, b);

	loop(c, d);
	//if(t.joinable())
	t.join();

	return 0;
}
