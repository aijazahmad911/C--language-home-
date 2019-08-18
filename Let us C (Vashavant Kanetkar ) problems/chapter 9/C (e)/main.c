/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 18-8-2019
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
float fun(int,int ,int );
int main()
{
    float area,a,b,c;
    printf("Enter three sides of triangle: ");
    scanf("%f%f%f",&a,&b,&c);
    area=fun(a,b,c);
    printf("Area of triangle = %f",area);
    return 0;
}
float fun(int a,int b,int c)
{
    float z,s,x;
    s=(a+b+c)/2;
    x=s*(s-a)*(s-b)*(s-c);
    z=sqrt(x);
    return z;
}
