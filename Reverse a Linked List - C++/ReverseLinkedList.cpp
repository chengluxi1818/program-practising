/*
 * ReverseLinkedList.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node {
	int val;
	Node* next;
};

Node * reverseR( Node * ptr , Node * previous)
{
    Node * temp;
    if(ptr->next == NULL) {
        ptr->next = previous;
        return ptr;
    } else {
        temp = reverseR(ptr->next, ptr);
        ptr->next = previous;
        return temp;
    }
}

reversedHead = reverseR(head, NULL);

Node * reverseI( Node * ptr )
{
    Node * temp;
    Node * previous = NULL;
    while(ptr != NULL) {
        temp = ptr->next;
        ptr->next = previous;
        previous = ptr;
        ptr = temp;
    }
    return previous;
}

int main()
{
	cout << "" << endl;
}



