#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,f;
  printf("enter a number :");
  scanf("%d",&n);
  f=fact(n);
  printf("factorial of %d is %d",n,f);
}
int fact(int n)
{int s=1;
if(n==1)
    return(1);
   s=n*fact(n-1);
return(s);
}
