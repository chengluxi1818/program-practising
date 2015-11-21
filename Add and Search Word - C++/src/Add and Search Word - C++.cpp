//============================================================================
// Name        : Add.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "WordDictionary.h"
using namespace std;

int main() {
	WordDictionary wordDictionary;
	wordDictionary.addWord("bad");
	wordDictionary.addWord("dad");
	wordDictionary.addWord("mad");

	cout << wordDictionary.search("pad") << endl;
	cout << wordDictionary.search("bad") << endl;
	cout << wordDictionary.search(".ad") << endl;
	cout << wordDictionary.search("b..") << endl;
	return 0;
}
