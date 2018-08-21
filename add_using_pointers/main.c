/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//add two numbers using pointers
#include <stdio.h>
#include <stdlib.h>
void add(int*,int*,int*);
int main()
{
   int c=0,a,b;
   printf("enter a number :");
   scanf("%d",&a);
   printf("\nenter second number :");
   scanf("%d",&b);
   add(&a,&b,&c);
   printf("sum is %d",c);
   getch();
}
void add(int* a,int* b,int* c)
{
    *c=*a+*b;
}
