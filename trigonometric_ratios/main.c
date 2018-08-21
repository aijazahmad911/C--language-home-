/*program to trigonometric ratios
 By: Aijaz Ahmad Wani
 IMCA SEM-1 */
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    //local declaration
    float angle,s,c,t;
    //input
    printf("enter value of angle :");
    scanf("%f",&angle);
    /* convert angle to radians*/
    angle=angle*3.14/180;
    s=sin(angle);
    c=cos(angle);
    t=tan(angle);
    //output
    printf("\n\n sin=%f     cos=%f      tan=%f",s,c,t);
    getch();
}

