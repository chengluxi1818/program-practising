/*
 * KthSmallestBST.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//-------------------------------------------------------------------------------------
int visit(TreeNode* root, int &k) {

        // if there are left children...
        if (root->left)
        {
            // ... then the k'th smallest is somewhere to the left
            int res = visit(root->left,k);
            // ... if we don't need to go for the next smallest
            if (k == 1)
                // then we are done
                return res;
            // otherwise we go for the next smallest
            else k=k-1;
        }

        // if we don't need to go for the next smallest
        if (k == 1)
            // then we are the one
            return root->val;
        else
        {
            // otherwise, it's bigger than us, somewhere to the right.
            if (root->right)
                {
                    k = k-1;
                    return visit(root->right, k);
                }
        }
}

int kthSmallest(TreeNode* root, int k) {
        return visit(root, k);
}

//-------------------------------------------------------------------------------------
int kthSmallestMY(TreeNode* root, int k) {
    if (!root) return 0;
    if (k==0) return root->val;

    int n=count_size(root->left);
    if (k==n+1) return root->val;

    if (n>=k){
        return kthSmallest(root->left, k);
    }
    if (n<k){
        return kthSmallest(root->right, k-n-1);
    }

}

int count_size(TreeNode* root){
    if (!root) return 0;
    return 1+count_size(root->left)+count_size(root->right);

}

//-------------------------------------------------------------------------------------

int main()
{
	cout << "" << endl;
}


