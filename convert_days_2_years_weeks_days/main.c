/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to convert given days to years,weeks and days
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,temp,year=0,week=0,days=0;
    printf("enter total no. of days : ");
    scanf("%d",&n);
    year=n/365;
    temp=n%365;
    week=temp/7;;
    days=temp%7;
    printf("%d days is equal to %d year(s)\n%d week(s) \nand %d day(s)",n,year,week,days);
    getch();
}
