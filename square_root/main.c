#include<stdio.h>
#include<conio.h>
float squareroot(float );
void main()
{
    float n,result;
    printf("enter a number\n");
    scanf("%f",&n);
    result=squareroot(n);
    printf("square root of %f is %f",n,result);
}
float sqaureroot(float num)
{
    float x=num;
    if(num>=0)
    {
        int i;
        for(i=0;i,20;i++)
        {
        x=((x*x)+num)/(2*x);
    }
    }
    return x;
}
