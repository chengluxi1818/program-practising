/*
 * BSTSearch.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node {
	int val;
	Node* left;
	Node* right;
};

bool BSTSearch(Node* root, int data)
{
	if(!root) return false;

	if(root->val == data) return true;

	if(root->val < data) return BSTSearch(root->left, data);
	else return BSTSearch(root->right, data);
}

int main()
{
	cout << "" << endl;
}


