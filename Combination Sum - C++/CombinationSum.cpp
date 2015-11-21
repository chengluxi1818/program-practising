/*
 * CombinationSum.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Given a set of candidate numbers (C) and a target number (T),
find all unique combinations in C where the candidate numbers sums to T.

The same repeated number may be chosen from C unlimited number of times.

Note:
All numbers (including target) will be positive integers.
Elements in a combination (a1, a2, ¡­ , ak) must be in non-descending order. (ie, a1 ¡Ü a2 ¡Ü ¡­ ¡Ü ak).
The solution set must not contain duplicate combinations.
For example, given candidate set 2,3,6,7 and target 7,
A solution set is:
[7]
[2, 2, 3]
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <algorithm>

using namespace std;

void dfs(vector<int> n, int size, int start, int now, int target, vector<int> &save, vector<vector<int>> &v){
    if(now == target){
        v.push_back(save);
        return;
    }

    for(int i =  start; i < size; i++){
        if(now + n[i] > target)//above the target value, so the rest(bigger) value are impossible
            return;
        save.push_back(n[i]);
        dfs(n, size, i, now + n[i], target, save, v);
        save.pop_back();
    }
    return;
}

vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
    vector<vector<int>> v;
    vector<int> save;

    //must sort first! then even though there's same element in candidates,
    //it will not produce duplicate combination
    sort(candidates.begin(), candidates.end());

    dfs(candidates, candidates.size(), 0, 0, target, save, v);

    return v;
}


int main()
{
	cout << "" << endl;
}


