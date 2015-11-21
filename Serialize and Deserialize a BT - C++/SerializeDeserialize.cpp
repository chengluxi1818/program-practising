/*
 * SerializeDeserialize.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Serialization is to store tree in a file so that it can be later restored.
The structure of tree must be maintained.
Deserialization is reading tree back from file.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

#define MARKER -1

struct Node
{
    int key;
    struct Node* left, *right;
};

Node* newNode(int key)
{
    Node* temp = new Node;
    temp->key = key;
    temp->left = temp->right = NULL;
    return (temp);
}

// This function stores a tree in a file pointed by fp
void serialize(Node *root, FILE *fp)
{
    // If current node is NULL, store marker
    if (root == NULL)
    {
        fprintf(fp, "%d ", MARKER);
        return;
    }

    // Else, store current node and recur for its children
    fprintf(fp, "%d ", root->key);
    serialize(root->left, fp);
    serialize(root->right, fp);
}

// This function constructs a tree from a file pointed by 'fp'
void deSerialize(Node *&root, FILE *fp)
{
    // Read next item from file. If theere are no more items or next
    // item is marker, then return
    int val;
    if ( !fscanf(fp, "%d ", &val) || val == MARKER)
       return;

    // Else create node with this item and recur for children
    root = newNode(val);
    deSerialize(root->left, fp);
    deSerialize(root->right, fp);
}

int main()
{
	cout << "" << endl;
}


