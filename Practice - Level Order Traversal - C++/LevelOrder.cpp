/*
 * LevelOrder.cpp
 *
 *  Created on: Aug 6, 2015
 *      Author: Luxi
 */

/*
 * Given a Binary Tree, return a array indicating that on each level,
 * whether there are Nodes share the same value.
 *
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <queue>
#include <unordered_map>

using namespace std;

struct Node {
	int val;
	Node* left;
	Node* right;
};

vector<bool> checkLevel(Node* root)
{
	queue<Node*> values;
	vector<bool> result;
	if(!root) return result;

	values.push(root);
	int count = 1;
	unordered_map<int, int> hash;
	bool flag = false;

	while(!values.empty()) {
		Node* front = values.front();

		int frontval = front->val;

		if(hash.find(frontval) == hash.end()) {
			hash[frontval]++;
		}
		else {
			flag = true;
		}

		if(front->left)
			values.push(front->left);
		if(front->right)
			values.push(front->right);

		values.pop();
		count--;

		if(count == 0) {
			hash.clear();
			count = values.size();
			result.push_back(flag);
			flag = false;
		}
	}
}

int main()
{
	cout << "" << endl;
}


