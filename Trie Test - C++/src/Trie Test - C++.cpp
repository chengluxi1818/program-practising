//============================================================================
// Name        : Trie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>

#include "Trie.h"
using namespace std;

int main() {
	Trie trietest;

	trietest.insert("aa");

	cout << trietest.search("a") << endl; // prints !!!Hello World!!!
	return 0;
}
