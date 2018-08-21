// program to find greatest and smallest in an array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,b=0,s=0;


    printf("enter the size of an array :");
    scanf("%d",&n);
    int a[n];

    printf("\nenter numbers of array");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
        b=a[0];
    s=a[0];
// processing
for(i=0;i<n;i++)
{
    if(a[i]>b)
        b=a[i];
    if(a[i]<s)
        s=a[i];

}
printf("\nbiggest number =%d",b);
printf("\nsmallest  number =%d",s);


}

