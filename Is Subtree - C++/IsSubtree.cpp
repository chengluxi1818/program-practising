/*
 * IsSubtree.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
    int val;
    struct Node* left;
    struct Node* right;
};

bool isSubtree(Node* root1, Node* root2)
{
	if(!root1 && !root2) return true;

	Node* same = searchNode(root1, root2->val);

	if(same)
		return isSameTree(same, root2);
	else
		return false;
}

Node* searchNode(Node* root, int val)
{
	if(!root) return NULL;

	if(root->val == val)
		return root;

	Node* search = searchNode(root->left, val);
	if(search)
		return search;

	return search(root->right, val);
}

bool isSameTree(Node* root1, Node* root2)
{
	if(!root1 && !root2) return true;

	if(root1 && root2 && root1->val == root2->val)
		return isSameTree(root1->left, root2->left) && isSameTree(root1->right, root2->right);

	return false;
}


int main()
{
	cout << "" << endl;
}


