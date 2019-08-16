/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 16-8-2019
*/
// prime numbers between 1-300
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,j=2;
    while(j<=300)
    {
        i=2;
        while(i<j)
        {

            if(j%i==0)
            {
                break;
            }
        i++;
        }
        if(j==i)
        printf("\n%d is Prime",j);
    j++;
    }

}

