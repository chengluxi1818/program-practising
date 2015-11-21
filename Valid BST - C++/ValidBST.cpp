/*
 * ValidBST.cpp
 *
 *  Created on: Aug 6, 2015
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

bool ValidBST(Node* root)
{
	if(!root) return true;

	if(root->left && root->left->val > root->val) return false;
	if(root->right && root->right->val < root->val) return false;

	return ValidBST(root->left) && ValidBST(root->right);
}

int main()
{
	cout << "" << endl;
}



