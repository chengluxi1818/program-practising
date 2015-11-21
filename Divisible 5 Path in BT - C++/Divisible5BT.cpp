/*
 * Divisible5BT.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <queue>

using namespace std;

struct Node {
	int val;
	Node* left;
	Node* right;
};


void printQue(queue<int>* path)
{
	while(!path->empty()) {
		cout << path->front() << " ";
		path->pop();
	}
}

void printFivePath(Node* root, queue<int>* path)
{
	if(!root) return;

	path->push(root->val);

	printFivePath(root -> left, path);
	printFivePath(root -> right, path);

	if(root -> val % 5 == 0) {
		printQue(path);
	}
}

void printPath(Node* root)
{
	queue<int>* q;
	printFivePath(root, q);
}

int main()
{
	cout << "" << endl;
}


