//============================================================================
// Name        : Reverse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
 * Reverse the numbers in an integer
 *
 */

#include <iostream>
#include <limits.h>
using namespace std;

int reverse(int x) {
    unsigned int result = 0;
    bool neg = false;

    if(x < 0) {
    	neg = true;
    	x = -x;
    }

    do {
        result *= 10;
        result += x % 10;
        x /= 10;
    }
    while(x != 0);

    if(result > 0x7fffffff) return 0;
    if(neg) return -result;
    return result;
}

int main() {
	cout << reverse(1534236469) << endl; // prints !!!Hello World!!!
	return 0;
}
