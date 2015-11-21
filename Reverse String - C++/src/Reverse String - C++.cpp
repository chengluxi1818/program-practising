//============================================================================
// Name        : Reverse.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void string_reverse1(char *string)
{
    int c = 0;
    while(string[c] != '\0') c++;

    if(c == 0) return;

    for(int i = 0, j = c-1; i < j; i++, j--) {
    	char temp = string[i];
    	string[i] = string[j];
    	string[j] = temp;
    }
}



char *string_reverse2(const char *string)
{
    int c = 0;
    while(string[c] != '\0') c++;

    if(c == 0) return NULL;

    char* res = new char[c];
    for(int i = 0, j = c-1; i < c; i++, j--)
    	res[i] = string[j];

    return res;
}

int main() {
	char* str = new char[5] {'a', 'b', 'c', 'd', 'e'};

	string_reverse1(str);

	cout << str << endl;

	char* str2;;

	str2 = string_reverse2(str);

	cout << str2 <<endl;

	return 0;
}
