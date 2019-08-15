/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,breadth,radius;
    printf("Enter length and breadth of rectangle : ");
    scanf("%f%f",&length,&breadth);

    printf("Enter Radius of circle: ");
    scanf("%f",&radius);

    printf("\nArea of rectangle = %f",length*breadth);
    printf("\nPerimeter of rectangle = %f",(2*(length+breadth)));


    printf("\nArea of circle = %f ",(3.14*radius*radius));
    printf("\nCircumference of circle = %f",2*3.14*radius);
}
