#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,i=0;
    printf("enter a number :");
    scanf("%d",&n);
    while(n!=1)
    {
        a=n/10;
    printf("%d",a);
    n=n/10;

    i++;
    }
}
