/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// area of triangle
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float l1,l2,l3,sp=0;
    float area;
    printf("Enter lengths of three sides of triangle: ");
    scanf("%f%f%f",&l1,&l2,&l3);
    sp = (l1+l2+l3)/2.0;

    area = sqrt(sp*(sp-l1)*(sp-l2)*(sp-l3));
    printf("Area of triangle = %f ",area);
}
