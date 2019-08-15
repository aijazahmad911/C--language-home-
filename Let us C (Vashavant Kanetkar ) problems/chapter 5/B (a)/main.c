/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// calculate overtime pay
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1,hours,overtime=0;
    while(i<=3)
    {
        printf("\nEnter NO. of Hours worked: ");
        scanf("%d",&hours);
        if(hours>40)
        {
            overtime=hours-40;
            printf("Overtime pay = %d ",overtime*12);
        }
        else
        {
            printf("No overtime");
        }
        i++;
    }
}
