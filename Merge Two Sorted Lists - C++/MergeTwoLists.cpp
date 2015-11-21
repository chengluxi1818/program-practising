/*
 * MergeTwoLists.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Merge two sorted linked lists and return it as a new list.
The new list should be made by splicing together the nodes of the first two lists
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

ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {

    if(NULL == l1) return l2;
    if(NULL == l2) return l1;

    ListNode* head=NULL;    // head of the list to return

    // find first element (can use dummy node to put this part inside of the loop)
    if(l1->val < l2->val)       { head = l1; l1 = l1->next; }
    else                        { head = l2; l2 = l2->next; }

    ListNode* p = head;     // pointer to form new list

    // I use && to remove extra IF from the loop
    while(l1 && l2){
        if(l1->val < l2->val)   { p->next = l1; l1 = l1->next; }
        else                    { p->next = l2; l2 = l2->next; }
        p=p->next;
    }

    // add the rest of the tail, done!
    if(l1)  p->next=l1;
    else    p->next=l2;

    return head;
}

int main()
{
	cout << "" << endl;
}


