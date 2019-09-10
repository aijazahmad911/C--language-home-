/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 10-9-2019
*/
//program to check if arr[0] = arr[n-1] and so on
#include <stdio.h>
#include <stdlib.h>
#define n 8
int main()
{
    int i,c=0;
    int arr[n]={1,2,3,4,4,3,2,1};
    for(i=0;i<n;i++)
    {
        if(arr[i]!=arr[n-1-i])
            c++;
    }
    if(c==0)
        printf("True\n\narr[0] == arr[n-1] and so on....\n");
    else
        printf("False");
}
