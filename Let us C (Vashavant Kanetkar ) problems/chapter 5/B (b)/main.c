/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// calculate factorial of a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int temp,num,fact=1;
    printf("Enter number: ");
    scanf("%d",&num);

    temp=num;
    while(temp>0)
    {
        fact=fact*temp;
        temp--;
    }
    printf("Factorial of %d = %d ",num,fact);

}
