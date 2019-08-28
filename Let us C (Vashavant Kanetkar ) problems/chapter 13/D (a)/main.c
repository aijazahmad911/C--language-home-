/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 28-8-2019
*/
#include <stdio.h>
#include <stdlib.h>

# define size 10
int main()
{
    int i,array[size],count=0,search;
    printf("Enter array elements: ");
    for (i=0;i<size;i++)
        scanf("%d",&array[i]);

    printf("Enter number to be searched: ");
    scanf("%d",&search);
    for (i=0;i<size;i++)
    {
        if(search==array[i])
            count++;
    }
    if(count>0)
        printf("\nNumber found %d times ",count);
    if (count==0)
        printf("\nNumber not found");
}
