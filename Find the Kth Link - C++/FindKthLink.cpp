/*
 * FindKthLink.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
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

/* Function to get the nth node from the last of a linked list*/
int GetNth(struct node* head, int index)
{
    struct node* current = head;
    int count = 0; /* the index of the node we're currently
                  looking at */
    while (current != NULL)
    {
       if (count == index)
          return(current->data);
       count++;
       current = current->next;
    }

    /* if we get to this line, the caller was asking
       for a non-existent element so we assert fail */
    //assert(0);
    return current->data;
}

int main()
{
	cout << "" << endl;
}


