#include <stdio.h>
#include <stdlib.h>

int main()
{
int i,size,max=0,min=0;
printf("enter size");
scanf("%d",&size);
int a[size];
printf("enter numbers :");
for(i=0;i<size;i++)
    scanf("%d",&a[i]);
min=a[0];
max=a[0];
for(i=0;i<size;i++)
{
    if(a[i]>max)
        max=a[i];
    if(a[i]<min)
        min=a[i];
}
printf("maximum =%d\n",max);
printf("minimum =%d",min);
getch();
}
