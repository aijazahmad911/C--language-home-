/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// find raised to the power
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i=1,result=1;
    printf("Enter first number: ");
    scanf("%d",&num1);
    printf("Enter second number: ");
    scanf("%d",&num2);

    while(i<=num2)
    {
        result=result*num1;
        i++;
    }
    printf("Result = %d",result);
}
