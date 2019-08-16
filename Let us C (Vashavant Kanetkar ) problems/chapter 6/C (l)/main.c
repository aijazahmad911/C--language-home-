/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 16-8-2019
*/
 // print 24 hours of day
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hour;
    for(hour=0;hour<24;hour++)
    {
        if(hour == 0)
            printf("12 Midnight\n");
        if(hour < 12)
            printf("%d AM\n",hour);
        if(hour == 12)
            printf("12 Noon\n");
        if(hour > 12)
            printf("%d PM\n",hour);
    }
}
