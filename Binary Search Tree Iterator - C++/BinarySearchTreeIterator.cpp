/*
 * BinarySearchTreeIterator.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <queue>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

int main()
{
	cout << "" << endl;
}

class BSTIterator {
private:
    queue<int> stk;
public:
    BSTIterator(TreeNode *root) {
        DFS(root);
    }

    /** @return whether we have a next smallest number */
    bool hasNext() {
        if(stk.empty()) return false;

        return true;
    }

    /** @return the next smallest number */
    int next() {
        int result = stk.front();
        stk.pop();

        return result;
    }

    void DFS(TreeNode* root) {
        if(!root) return;

        DFS(root -> left);
        stk.push(root->val);
        DFS(root -> right);
    }
};
