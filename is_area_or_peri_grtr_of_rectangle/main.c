/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/*program to check whether area is greater or perimeter*/
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int l,b,area,peri;// local declaration section
 //input section
 printf("enter length of rectangle :");
 scanf("%d",&l);
 printf("\nenter breadth of rectangle :");
 scanf("%d",&b);
 area=l*b;
 peri=2*
 (l+b);
 if(area>peri)
    printf("\n\nAREA IS GREATER");
 else
    printf("\n\n PERIMETER IS GREATER");
getch();
}
