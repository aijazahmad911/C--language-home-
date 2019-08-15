/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// reverse a number
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,reverse=0,temp=0;
    printf("Enter a number:  ");
    scanf("%d",&num);
    while(num>0)
    {
        temp=num%10;
        reverse=reverse*10+temp;
        num=num/10;
    }
    printf("Reverse number = %d",reverse);
}
