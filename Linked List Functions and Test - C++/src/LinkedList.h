/*
 * LinkedList.h
 *
 *  Created on: Sep 29, 2015
 *      Author: Luxi
 */

#include <iostream>
using namespace std;

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_

struct Node {
	int val;
	Node* next;
};

class LinkedList {
private:
	Node* head;
	int length;
public:
	LinkedList() {
		head = NULL;
		length = 0;
	}

	void insert(int value) {
		Node* p = new Node();
		p->val = value;
		p->next = NULL;

		if(!head)
			head = p;
		else {
			Node* q = head;
			while(q->next)
				q = q->next;
			q->next = p;
		}
		length++;
	}

	void removeVal(int value) {
		Node* q = head;
		Node* p = head;

		while(q) {
			if(q->val == value) {
				p->next = q->next;
				Node* temp = q;
				q = q->next;
				delete temp;
				length--;
			}
			else {
				p = q;
				q = p->next;
			}
		}
	}

	void print() {
		Node *q = head;
		while(q) {
			cout << q->val << " ";
			q = q->next;
		}
		cout << endl;
	}

	void reverseR() {
		Node* newHead = new Node();
		newHead->val = -1;
		newHead->next = head;

		while(head->next) {
			Node* next = head->next;
			head->next = next->next;
			next->next = newHead->next;
			newHead->next = next;
		}

		head = newHead->next;
		delete newHead;
	}

	virtual ~LinkedList() {
		while(head) {
			Node* temp = head;
			head = head->next;
			delete temp;
		}
	}
};

#endif /* LINKEDLIST_H_ */
