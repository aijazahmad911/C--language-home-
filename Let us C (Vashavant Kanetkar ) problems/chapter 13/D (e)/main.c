/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 28-8-2019
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num[]={12,4,5,1,9,13,11,19,54,44};
    int i,temp;
    for(i=0;i<=9;i=i+2)
    {
        temp = num[i];
        num[i]=num[i+1];
        num[i+1]=temp;

    }
    for (i=0;i<=9;i++)
        printf("\t%d",num[i]);
}
