/*
 * Anagram.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*Given an array of strings, return all groups of strings that are anagrams.

Note: All inputs will be in lower-case.*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <unordered_map>
#include <algorithm>

using namespace std;

vector<string> anagrams(vector<string> &strs){
        unordered_map<string,int> mytable;
        vector<string> res;
        for(int i=0;i<strs.size();i++){
                string str = strs[i];
                sort(str.begin(),str.end());
                auto got = mytable.find(str);
                if(got == mytable.end()){
                        mytable[str] = i;

                }else{
                        res.push_back(strs[i]);
                        if(got->second!= -1 ){
                                res.push_back(strs[got->second]);
                                got->second = -1;
                        }
                }
        }
        return res;
}

int main()
{
	cout << "" << endl;
}



