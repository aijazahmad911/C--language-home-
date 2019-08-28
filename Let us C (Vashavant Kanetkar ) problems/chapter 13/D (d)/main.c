/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 28-8-2019
*/
#include <stdio.h>
#include <stdlib.h>

#define size 10
int main()
{
    int i,pos=0,neg=0,even=0,odd=0,array[size];
    printf("Enter array elements: ");
    for (i=0;i<size;i++)
        scanf("%d",&array[i]);
    for (i=0;i<size;i++)
    {
        if(array[i]>0)
            pos++;
        if(array[i]<0)
            neg++;
        if(array[i]%2==0)
            even++;
        else
            odd++;
    }
    printf("\nPositive elements = %d ",pos);
    printf("\nNegative elements = %d ",neg);
    printf("\nEven elements = %d ",even);
    printf("\nOdd elements = %d ",odd);
}
