/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 19-8-2019
*/
// to calculate greatest common divisor
// using Euclid's algorithm
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int result=1,j,k,q;
    printf("Enter two numbers: ");
    scanf("%d%d",&j,&k);
    while(1)
    {
        q=j/k;
        result=j-q*k;
        if(result==0)
            printf("Greatest common divisor of two numbers = %d",k);

        j=k;
        k=result;

    }

}
