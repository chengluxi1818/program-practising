//============================================================================
// Name        : POSIX.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <pthread.h>
using namespace std;

struct IN {
	int a;
	int b;
};

void* loop(void* a) {
	IN* at = (IN*)a;
	//int* at = (int*)a;
	//int* bt = (int*)b;
	for(int i = at->a; i <= at->b; i++)
		cout << i << " ";
	pthread_exit(NULL);
}

int main() {

	pthread_t t;

	IN* A;
	A->a = 0;
	A->b = 99;

	int* a = 0;

	pthread_create(&t, NULL, loop, (void*)A);

	for(int i = 100; i < 200; i++)
		cout << i << " ";




	return 0;
}
