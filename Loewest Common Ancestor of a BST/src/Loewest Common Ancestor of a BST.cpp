//============================================================================
// Name        : Loewest.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

/*
Given a binary search tree (BST), find the lowest common ancestor (LCA) of two given nodes in the BST.

According to the definition of LCA on Wikipedia: ¡°The lowest common ancestor is defined between two nodes v and w as the lowest node in T that has both v and w as descendants (where we allow a node to be a descendant of itself).¡±

        _______6______
       /              \
    ___2__          ___8__
   /      \        /      \
   0      _4       7       9
         /  \
         3   5
For example, the lowest common ancestor (LCA) of nodes 2 and 8 is 6. Another example is LCA of nodes 2 and 4 is 2, since a node can be a descendant of itself according to the LCA definition.
*/

#include <iostream>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

bool findSub(TreeNode* root, TreeNode* dest)
{
    if(!root) return false;
    if(!dest) return false;

    if(root->val == dest->val) return true;

    return findSub(root->left, dest) || findSub(root->right, dest);
}

TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q)
{
    if(!root) return NULL;
    if(!q) return p;
    if(!p) return q;

    if(root->val == p->val) return p;
    if(root->val == q->val) return q;

    if(findSub(root->left, p) && findSub(root->right, q))
        return root;
    if(findSub(root->left, q) && findSub(root->right, p))
        return root;

    if(findSub(root->left, p) && findSub(root->left, q))
        return lowestCommonAncestor(root->left, p, q);

    if(findSub(root->right, p) && findSub(root->right, q))
        return lowestCommonAncestor(root->right, p, q);

}

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	return 0;
}
