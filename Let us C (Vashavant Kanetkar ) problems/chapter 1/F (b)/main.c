/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// conversion of distance in Km to m,cm,inches,ft
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float km,m,cm,ft,inches;
    printf("Enter distance in KM: ");
    scanf("%f",&km);
    m = km*1000;
    cm = m*100;
    inches = cm/2.54;
    ft = inches/12;
    printf("\nDistance in Meters = %f",m);
    printf("\nDistance in Centimeters = %f",cm);
    printf("\nDistance in Inches = %f",inches);
    printf("\nDistance in Feet = %f",ft);


    return 0;
}
