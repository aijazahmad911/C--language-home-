/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
   int no;
   printf("enter a number : ");
   scanf("%d",&no);
   if(no<0)
   {
    no=no*-1;
   printf("the absolute value of given number is %d\n",no);
}
else
printf("%d",no);
getch();
}
