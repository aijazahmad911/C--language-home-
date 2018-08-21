#include <stdio.h>
#include <stdlib.h>
void tri(int,int,int);
int main()
{
    int a,b,c;
    printf("enter 1st side of triangle :");
    scanf("%d",&a);
    printf("\nenter 2nd side of triangle :");
    scanf("%d",&b);
    printf("\nenter 3rd side of triangle :");
    scanf("%d",&c);
    tri(a,b,c);
}
void tri(int a,int b,int c)
{
if(a>b&&a>c)
{
    if((b+c)>a)
        printf("\ntriangle is valid");
        else
        printf("invalid ");
}
if(b>a&&b>c)
{
    if((a+c)>b)
        printf("\n triangle is valid ");
        else
        printf("invalid ");
}
if(c>a&&c>b)
    if((a+b)>c)
    printf("\n triangle is valid");
    else
        printf("invalid ");
}
