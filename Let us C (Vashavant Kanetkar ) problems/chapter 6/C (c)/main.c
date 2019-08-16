/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 16-8-2019
*/
// 1/1! + 2/2! + 3/3! + ..... up to seven terms
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j;
    float fact=1,sum=0;;

    while(i<=7)
    {
        fact =1;
        for(j=1;j<=i;j++)
            fact =fact*j;

        sum = sum + i/fact;
    i++;
    }
    printf("Sum = %f",sum);
}
