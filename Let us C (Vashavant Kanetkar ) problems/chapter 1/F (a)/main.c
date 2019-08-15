/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// calculate Ramesh's Gross salary
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basic_sal,dearness_allow,house_rent,gross_sal;
    printf("Enter Ramesh's Basic Salary: ");
    scanf("%f",&basic_sal);
    dearness_allow = (40.0/100)*basic_sal;
    house_rent = (20.0/100)*basic_sal;

    gross_sal = basic_sal + dearness_allow + house_rent;

    printf("Gross Salary = %f ",gross_sal);
}
