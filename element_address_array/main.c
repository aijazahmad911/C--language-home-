//passing an entire array through functions
#include <stdio.h>
#include <stdlib.h>

int main()
{int n,i;
printf("enter array size :");
scanf("%d",&n);
int array[n];
printf("enter elements :\n");
for(i=0;i<n;i++)
scanf("%d",&array[i]);
 fun(array,n);
 getch();
}
void fun(int* a,int n)
{
    int i;
    for(i=0;i<n;i++)
    {

     printf("adress =%u",a);
     printf("value = %d\n",*a);
     a++;
    }
}
