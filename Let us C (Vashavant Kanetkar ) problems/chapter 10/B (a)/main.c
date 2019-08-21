/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 21-8-2019
*/
// sum of digits of a number (recursive and non-recursive method)
#include <stdio.h>
#include <stdlib.h>
int non_recursive(int);
int recursive(int);
int main()
{
    int num,sum1,sum2;
    printf("Enter a number: ");
    scanf("%d",&num);
    sum1 = non_recursive(num);
    printf("Sum of digits without recursion = %d\n\n",sum1);
    sum2 = recursive(num);
    printf("Sum of digits using recursion = %d\n\n",sum2);
}
int non_recursive(int num)
{
    int t,sum=0;
    while(num>0)
    {
        t = num%10;
        sum=sum+t;
        num=num/10;
    }
    return sum;
}

int recursive(int num)
{
    int sum=0,r;
    if(num!=0)
    {
        r=num%10;
        sum=r+recursive(num/10);
    }
    return sum;
}
