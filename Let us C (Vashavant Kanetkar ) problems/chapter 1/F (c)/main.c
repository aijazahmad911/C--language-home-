/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// calculate total marks and percentage
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float m1,m2,m3,m4,m5,agg_marks,percentage;

    printf("Enter marks in five subjects: ");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    agg_marks = m1+m2+m3+m4+m5;
    percentage = agg_marks/500*100;
    printf("\nAggregate Marks = %f ",agg_marks);
    printf("\nPercentage = %f",percentage);

}
