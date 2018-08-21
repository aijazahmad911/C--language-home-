//swap call by rerference
#include <stdio.h>
#include <stdlib.h>
void swap(int*,int*);
int main()
{
   int a,b;
   printf("enter first number :");
   scanf("%d",&a);
   printf("\nenter second number :");
   scanf("%d",&b);
   printf("\n\nbefore swapping numbers are %i and %d",a,b);
   swap(&a,&b);
   printf("\n\n\nafter swapping numbers are %d and %d",a,b);
}
void swap(int* a, int* b)
{
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
