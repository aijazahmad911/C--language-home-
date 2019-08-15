/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// calculate digit sum
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,temp,sum = 0;
    printf("Enter a number: ");
    scanf("%d",&num);
    while(num>0)
    {
        temp = num%10;
        num = num/10;
        sum = sum+temp;
    }
    printf("Digit Sum = %d",sum);
}
