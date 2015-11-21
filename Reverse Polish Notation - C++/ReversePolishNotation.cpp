/*
 * ReversePolishNotation.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, /. Each operand may be an integer or another expression.

Some examples:
  ["2", "1", "+", "3", "*"] -> ((2 + 1) * 3) -> 9
  ["4", "13", "5", "/", "+"] -> (4 + (13 / 5)) -> 6
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <stack>
#include <vector>

using namespace std;

int evalRPN(vector<string> &tokens) {
    stack<int> st;
    for(int i = 0; i < tokens.size(); ++i) {
        // if the current character is Number
        if(tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
            st.push(atoi(tokens[i].c_str()));
        else {  // current character is Symbol
            int a = st.top();   st.pop();
            int b = st.top();   st.pop();

            if(tokens[i] == "+")    st.push(b + a);
            if(tokens[i] == "-")    st.push(b - a);
            if(tokens[i] == "*")    st.push(b * a);
            if(tokens[i] == "/")    st.push(b / a);
        }
    }
    return st.top();
}

int main()
{
	cout << "" << endl;
}



