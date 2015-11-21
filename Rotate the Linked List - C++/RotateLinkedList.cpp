/*
 * RotateLinkedList.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Given a list, rotate the list to the right by k places, where k is non-negative.

For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
*/



#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

/*
Enumerate through the list to find the last node, count the size along the way.
Make a loop, by connection last to first
Get modulo of |k/size| - avoiding extra rotation
Enumerate again size-k nodes
Break the loop and return new head
*/


ListNode* rotateRight(ListNode *head, int k)
    {
       if(head == NULL || head->next == NULL||k==0) return head;

       ListNode* node = head;
       int size =1;

       while(node->next != NULL)
       {
           size++;
           node = node->next;
       }

       //loop the list
       node->next=head;

       //handle the case of k>size
       k = k%size;

       //find the node to break the loop at
       while(--size >= k)
       {
           node=node->next;
       }

       ListNode* first = node->next;
       node->next=NULL;

       return first;
   }

int main()
{
	cout << "" << endl;
}



