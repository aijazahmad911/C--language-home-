/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 18-8-2019
*/
#include <stdio.h>
#include <stdlib.h>
void fun(int*,int*);
int main()
{
    int sum,avg;
    fun(&sum,&avg);
    printf("Sum = %d\n",sum);
    printf("Average = %d\n",avg);
}


void fun(int *sum,int *avg)
{
    int n1,n2,n3,n4,n5;
    printf("Enter 5 integers: ");
    scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
    *sum=n1+n2+n3+n4+n5;
    *avg=*sum/5;
}
