/*
 * ValidParenthese.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Given a string containing just the characters '(', ')', '{', '}', '[' and ']',
determine if the input string is valid.

The brackets must close in the correct order, "()" and "()[]{}" are all valid but "(]" and "([)]" are not.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>

using namespace std;

bool isValid(string s) {
    stack<char> ss;

    if(s.length() == 0) return true;

    for(int i = 0; i < s.length(); i++) {
    	if(ss.empty()) {
    		ss.push(s.at(i));
    		continue;
    	}
    	else {
			if(s.at(i) == ')' && ss.top() == '(')
				ss.pop();
			else if(s.at(i) == ']' && ss.top() == '[')
				ss.pop();
			else if(s.at(i) == '}' && ss.top() == '{')
				ss.pop();
			else
				ss.push(s.at(i));
    	}
    }

    return ss.empty();
}

int main()
{
	cout << "" << endl;
}
