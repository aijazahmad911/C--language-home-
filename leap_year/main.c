/*program to check whether a year is leap or not*/
#include <stdio.h>
#include <stdlib.h>
void leap(int);
int main()
{
    //local declaration section
    int y;
   //input section
   printf("enter a year :");
   scanf("%d",&y);
   leap(y);//function call
   return;
}
void leap(int y)// function definit
{
    if((y%100==0)&&(y%400==0))
        printf("leap year");
     else if(y%4==0)
        printf("leap year");
    else
        printf("not a leap year");

}
