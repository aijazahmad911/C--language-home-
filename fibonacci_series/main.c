/*program : fibonacci series
by :Aijaz Ahmad Wani
date: 7-july-2018*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0,b=1,c,i,n;
    printf("enter number of elements");
    scanf("%d",&n);
    printf("%d\n%d\n",a,b);
    for(i=3;i<=n;i++)
    {
        c=a+b;
        printf("%d\n",c);
        a=b;
        b=c;
    }
getch();
}
