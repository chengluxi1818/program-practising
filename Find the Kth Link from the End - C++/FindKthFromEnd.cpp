/*
 * FindKthFromEnd.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Given a Linked List and a number n,
write a function that returns the value at the nth node from end of the Linked List.
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

//-------------------------------------------------------------------------------------
// Use length of the linked list
void printNthFromLastL(struct node* head, int n)
{
    int len = 0, i;
    struct node *temp = head;

    // 1) count the number of nodes in Linked List
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }

    // check if value of n is not more than length of the linked list
    if (len < n)
      return;

    temp = head;

    // 2) get the (n-len+1)th node from the begining
    for (i = 1; i < len-n+1; i++)
       temp = temp->next;

    printf ("%d", temp->data);

    return;
}

//-----------------------------------------------------------------------------------------
// User 2 pointers
void printNthFromLastT(struct node *head, int n)
{
  struct node *main_ptr = head;
  struct node *ref_ptr = head;

  int count = 0;
  if(head != NULL)
  {
     while( count < n )
     {
        if(ref_ptr == NULL)
        {
           printf("%d is greater than the no. of "
                    "nodes in list", n);
           return;
        }
        ref_ptr = ref_ptr->next;
        count++;
     } /* End of while*/

     while(ref_ptr != NULL)
     {
        main_ptr = main_ptr->next;
        ref_ptr  = ref_ptr->next;
     }
     printf("Node no. %d from last is %d ",
              n, main_ptr->data);
  }
}

int main()
{
	cout << "" << endl;
}


