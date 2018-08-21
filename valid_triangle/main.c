/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
void tri(int,int,int);// function call
int main()
{
    int a1,a2,a3;//local declaration section
    //input section
    puts("enter first angle ;");
    scanf("%d",&a1);
    puts("enter second angle :");
    scanf("%i",&a2);
    puts("enter third angle :");
    scanf("%u",&a3);
    tri(a1,a2,a3);
    getch();
}
void tri(int a1,int a2,int a3)// function definition
{
    if((a1+a2+a3)==180)
        puts("triangle is VALID ");
    else
        puts("triangle is not valid");
}
