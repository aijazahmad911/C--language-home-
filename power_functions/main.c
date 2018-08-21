#include <stdio.h>
#include <stdlib.h>
#include<math.h>
int power(int,int);
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("\n%d",&a);
    printf("enter value of b");
    scanf("\n%d",&b);
    c=power(a,b);
    printf("\n%d",c);
}
int power(int a,int b)
{
    int c;
    c=pow(a,b);
    return(c);

}
