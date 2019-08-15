/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
//conversion of temperature
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fah,cen;
    printf("Enter Temperature in Fahrenheit: ");
    scanf("%f",&fah);

    cen = (fah-32)*5/9;

    printf("Temperature in Centigrade degrees = %f",cen);
}
