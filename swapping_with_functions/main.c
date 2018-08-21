#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,a,b;
printf("enter a number");
scanf("%d",&a);
printf("enter  second number");
scanf("%d",&b);
c=swap(a,b);
printf("%d",c);
}
swap(int a, int b)
{
    a=a+b;
    b=a-b;
    a=a-b;
    return(a,b);
}
