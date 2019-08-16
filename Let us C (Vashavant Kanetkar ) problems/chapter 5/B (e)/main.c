/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// print armstrong numbers between 1-500
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=2,num,result,temp;
    while(i<=500)
    {
        num=i;
        result=0;
        while(num>0)
        {
            temp = num%10;
            result = result+ (temp*temp*temp);
            num = num/10;
        }
        if(i==result)
        {
            printf("\n%d is armstrong number ",result);
        }
    i++;
    }
}
