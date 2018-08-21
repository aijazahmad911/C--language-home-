/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//factorial using function
#include <stdio.h>
#include <stdlib.h>
int factorial(int);

int main()
{
      int n,f;
      printf("enter a number to find its factorial : ");
      scanf("%d",&n);
      f=factorial(n);
      printf("factorial of %d is %d",n,f);
      getch();
}
int factorial(int n)
{
int i,s=1;
for(i=n;i>0;i--)
    s=i*s;
return(s);
}
