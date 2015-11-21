/*
 * ReverseLinkedList.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */
/*

Iterative Method
Iterate trough the linked list. In loop, change next to prev, prev to current and current to next.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/* Link list node */
struct node
{
    int data;
    struct node* next;
};

/* Function to reverse the linked list */
static void reverse(struct node* head_ref)
{
    struct node* prev   = NULL;
    struct node* current = head_ref;
    struct node* next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    head_ref = prev;
}


int main()
{
	cout << "" << endl;
}



