//============================================================================
// Name        : Trie.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

struct Node {
	int num_words;
	bool is_end;
	Node* child[26];
};

void initHead(Node* head)
{
	head = new Node();
	head->num_words = 0;
	head->is_end = false;
}

void insertNode(Node* head, string word)
{
	Node* current = head;
	current->num_words++;

	for(int i = 0; i < word.size(); i++) {
		int letter = (int)word[i] - (int)'a';
		if(current->child[letter] == NULL)
			current->child[letter] = new Node();

		current = current->child[letter];
		current->num_words++;
	}

	current->is_end = true;
}

bool searchNode(Node* head, string word)
{
	Node* current = head;

	for(int i = 0; i < word.size(); i++) {
		int letter = (int)word[i] - (int)'a';
		if(current->child[letter] == NULL)
			return false;
		current = current->child[letter];
	}

	return current->is_end;
}

int countWords(Node* head, string prefix)
{
	Node* current = head;

	for(int i = 0; i < prefix.size(); i++) {
		int letter = (int)prefix[i] - (int)'a';
		if(current->child[letter] == NULL)
			return 0;
		current = current->child[letter];
	}

	return current->num_words;
}



int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
