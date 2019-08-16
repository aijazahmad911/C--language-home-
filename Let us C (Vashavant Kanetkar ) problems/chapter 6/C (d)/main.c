/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 16-8-2019
*/
// all combinations of 1,2 and 3
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,j=1,k=1;

    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            for(k=1;k<=3;k++)
                printf("\n%d%d%d",i,j,k);
        }
    }
}
