//============================================================================
// Name        : Number.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <unordered_map>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

/*
long long combination(long n, long r)
{
    long long int *f = new long long int[n+1];

	//long long f[n + 1];
    f[0] = 1;
    for (long i = 1; i <= n; i++)
        f[i] = i * f[i - 1];

    long long res = f[n] / f[r] / f[n - r];
    //return f[n] / f[r] / f[n - r];
    delete [] f;
    return res;
}
*/

long long numScrambles(long low, long high)
{
	unordered_map<string, int> map;
	long long res = 0;

	for(long i = low; i <= high; i++) {
		ostringstream convert;
		convert << i;
		string temp = convert.str();
		sort(temp.begin(), temp.end());

		if(map.find(temp) != map.end())
			res += map[temp];

		map[temp]++;
	}

	return res;
}

int main() {
	//cout << "The result of (1000, 9999) is: ";
	//cout << numScrambles(1000, 9999) << endl;
	//cout << "The result of (10000000, 20000000) is: ";
	//cout << numScrambles(10000000, 20000000) << endl;

	string str = "great";
	string strl = str.substr(0, str.size()/2);
	string strr = str.substr(str.size()/2, str.size()-str.size()/2);

	cout << str << " " << strl << " " << strr << endl;

	return 0;
}
