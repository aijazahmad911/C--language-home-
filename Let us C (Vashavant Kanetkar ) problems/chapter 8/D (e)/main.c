/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 17-8-2019
*/
// prime factors of a number
#include <stdio.h>
#include <stdlib.h>
void prime (int);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    prime(num);
    return 0;
}
void prime(int num)
{
    int i=2;
    while(num!=1)
    {
        if(num%i==0)
        {
            printf("%d\n",i);
        }
        else{
            i++;
            continue;
        }
        num=num/i;
    }
}
