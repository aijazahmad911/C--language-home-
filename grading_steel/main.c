//program to grade steel
#include <stdio.h>
#include <stdlib.h>

main()
{
    //local declaration section
    float h,cc,ts;
    //input section
    printf("enter hardness of steel :");
    scanf("%f",&h);
    printf("\nenter carbon content :");
    scanf("%f",&cc);
    printf("\nenter tensile strength :");
    scanf("%f",&ts);
    //processing
    if(h>50&&cc<0.7&&ts>5600)
        printf("GRADE 10");
    else if(h>50&&cc<0.7)
        printf("GRADE 9");
    else if(cc<0.7&&ts>5600)
        printf("GRADE 8");
    else if(h>50&&ts>56000)
        printf("GRADE 7");
    else if(h>50||cc<0.7||ts>5600)
        printf("GRADE 6");
    else
        printf("GRADE 5");
}

