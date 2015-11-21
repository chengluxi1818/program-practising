/*
 * MinNoCoinsChange.cpp
 *
 *  Created on: Aug 4, 2015
 *      Author: Luxi
 */

/*
Please implement a function which gets the minimal number of coins, whose value is v1, v2, бн, vn,
to make change for an amount of money with value t.
Any coin with value vi may duplicate for any times to make change

For example, the minimal number of coins to make change for 15 out of a set of coins with value 1, 3, 9, 10 is 3.
We can choose two coins with value 3 and a coin with value 9.
The number of coins for other choices should be greater than 3.
*/

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int GetMinCount(int total, int* coins, int length)
{
    int* counts = new int[total + 1];
    counts[0] = 0;

    const int MAX = 0x7FFFFFFF;

    for(int i = 1; i <= total; ++ i)
    {
        int count = MAX;
        for(int j = 0; j < length; ++ j)
        {
            if(i - coins[j] >= 0 && count > counts[i - coins[j]])
                count = counts[i - coins[j]];
        }

        if(count < MAX)
            counts[i] = count + 1;
        else
            counts[i] = MAX;
    }

    int minCount = counts[total];
    delete[] counts;

    return minCount;
}

int main()
{
	cout << "" << endl;
}


