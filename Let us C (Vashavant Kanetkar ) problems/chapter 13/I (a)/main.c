/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 10-9-2019
*/
// copy contents of one array into another in reverse order
#include <stdio.h>
#include <stdlib.h>
#define size 7
int main()
{
    int i,j=0;
    int arr1[size]={1,2,3,4,5,6,7};
    int arr2[size];
    for(i=size-1;i>=0;i--)
    {
        arr2[j]=arr1[i];
        j++;
    }
    printf("Elements of first array: ");
    for(i=0;i<size;i++)
        printf("%d\t",arr1[i]);

    printf("\nElements second array: ");
    for(i=0;i<size;i++)
        printf("%d\t",arr2[i]);
}
