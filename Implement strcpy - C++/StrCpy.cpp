/*
 * StrCpy.cpp
 *
 *  Created on: Aug 3, 2015
 *      Author: Luxi
 */


#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

//http://www.cnblogs.com/chenyg32/p/3739564.html


char * strcpy(char *dst,const char *src)   //[1]
{
	//assert(dst != NULL && src != NULL);    //[2]
    if(dst == NULL && src == NULL) return NULL;

    char *ret = dst;  //[3]

    while ((*dst++=*src++)!='\0'); //[4]

    return ret;
}

char *my_memcpy(char *dst, const char* src, int cnt)
{
    //assert(dst != NULL && src != NULL);
    if(dst == NULL && src == NULL) return NULL;

    char *ret = dst;

    if (dst >= src && dst <= src+cnt-1) //内存重叠，从高地址开始复制
    {
        dst = dst+cnt-1;
        src = src+cnt-1;
        while (cnt--)
            *dst-- = *src--;
    }
    else    //正常情况，从低地址开始复制
    {
        while (cnt--)
            *dst++ = *src++;
    }

    return ret;
}

int main()
{
	char a[5] = {'a', 'b', 'c', 'd', 'e'};
	my_memcpy(a+2, a, 5);

	for(int i = 0; i < 7; i++)
		cout << a[i];
}
