// program to check leap year ???
#include <stdio.h>
#include <stdlib.h>
void leap(int);
int main()
{
    //local declaration
    int year;
    //input section
    printf("enter a year :");
    scanf("%d",&year);
    leap(year);
}
void leap(int year)
{
  if(year%400==0||year%100!=0&&year%4==0)
        printf("leap year");

  else
    printf("not a leap year");
}
