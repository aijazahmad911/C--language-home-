//// sum of positive and negative numbers
#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,sump=0,sumn=0,n;
        int a[n];

    printf("enter no. of elements :");
    scanf("%d",&n);
    printf("enter numbers :");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            if(a[i]>0)
                sump=sump+a[i];
            else if(a[i]<0)
                sumn=sumn+a[i];
        }
printf("\nsum of positive numbers =%d",sump);
printf("\nsum of negative numbers =%d",sumn);
}
