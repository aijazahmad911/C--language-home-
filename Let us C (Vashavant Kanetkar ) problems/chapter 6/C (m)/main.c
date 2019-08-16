/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 16-8-2019
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,k;
    for(i=0;i<4;i++)
    {
        for(j=0;j<4-i;j++)
        {
            printf(" ");
        }
        for(k=i+1;k<(2*i+2);k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
