/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// calculate BMI (Body Mass Index)
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight,height,BMI;
    printf("Enter weight in KG: ");
    scanf("%f",&weight);
    printf("Enter height in meters: ");
    scanf("%f",&height);
    BMI = weight/(height*height);

    printf("BMI = %f",BMI);

    if(BMI<15)
        printf("Starvation");
    else if(BMI<17.5)
        printf("Anorexic");
    else if(BMI<18.5)
        printf("Underweight");
    else if(BMI<24.9)
        printf("Ideal");
    else if(BMI<25.9)
        printf("Overweight");
    else if(BMI<30.9)
        printf("Obese");
    else printf("Morbidly Obese");
    getch();
}
