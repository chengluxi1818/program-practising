/*
 * MinStack.h
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */
/*

Design a stack that supports push, pop, top, and retrieving the minimum element in constant time.

push(x) -- Push element x onto stack.
pop() -- Removes the element on top of the stack.
top() -- Get the top element.
getMin() -- Retrieve the minimum element in the stack.
*/


/*
The key idea is use a another stack to store the minimum value of the corresponding stack.
Put differently, min[i] equals the minimum element where data[i] is the top of this sub-stack.

We can use a full size of min where its size equals the data's, but it's not necessary.

Idea

We should pop the element in min IFF there's match of data.top().

If we have multiple same minima, for example [0, 1, 0] in data, then the min should be [0, 0].
Otherwise, the the pop operation wouldn't work properly,
since that you need 2 0s. As a result, we should push the element if x <= min.top().
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

#ifndef MINSTACK_H_
#define MINSTACK_H_

class MinStack {

    stack<int> data;
    stack<int> min;

public:

    void push(int x) {

        // If empty
        if (min.empty()) {
            data.push(x);
            min.push(x);
        }

        // Not empty
        else {
            data.push(x);
            if (x <= min.top())
                min.push(x);
        }

    }

    void pop() {

        if (!min.empty()) {
            if (data.top() == min.top())
                min.pop();
            data.pop();
        }
    }

    int top() {
        return data.top();
    }

    int getMin() {
        return min.top();
    }

public:
	MinStack();
	virtual ~MinStack();
};

#endif /* MINSTACK_H_ */
