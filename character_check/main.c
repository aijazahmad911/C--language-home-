#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
   printf("enter a character :");
   scanf("%c",&ch);
   if(ch>='A'&&ch<='Z)
    printf("UPPER CASE \n");
   else if(ch>=97&&ch<=122)
    printf("lower case \n");
   else if(ch>=48&&ch<=57)
    printf("DIGIT \n");
   else printf("special character \n");
}
