/*
 * ExtractEmail.cpp
 *
 *  Created on: Aug 5, 2015
 *      Author: Luxi
 */

/*
Write a function that takes in email lists and results in a
new email list that contains only the email addresses that are in all lists
*/


#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <string>

using namespace std;

vector<string> extractEmail(vector<string>& email)
{
	vector<string> address;

	for(int i = 0; i < email.size(); i++) {
		bool flag = false;
		string temp;

		for(int j = 0; j < email[i].size(); j++) {
			if(flag) {
				char ch = email[i].at(j);
				temp.push_back(ch);
			}

			if(email[i].at(j) == '@') {
				flag = true;
			}
		}

		if(flag) {
			address.push_back(temp);
			flag = false;
		}
		else {
			cout << "invalid email address!" << endl;
		}
	}

	return address;
}

int main()
{
	string a = "abc@gmail.com";
	string b = "good@hotmail.com";

	vector<string> r;
	r.push_back(a);
	r.push_back(b);

	vector<string> s;

	for(int i = 0; i < r.size(); i++) cout << r[i] << " ";

	s = extractEmail(r);

	for(int i = 0; i < s.size(); i++) cout << s[i] << " ";

	cout << "" << endl;
}

