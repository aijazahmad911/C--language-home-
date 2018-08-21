/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to determine youngest among three
#include <stdio.h>
#include <stdlib.h>
void young(int,int,int);// function declaration
main()
{
    int r,s,a;//local declaration section
    //input section
    printf("enter ram's age :");
    scanf("%i",&r);
    printf("\nenter shayam's age :");
    scanf("%i",&s);
    printf("\nenter ajay's age :");
    scanf("%i",&a);
    young(r,s,a);//function call
    getch();
}
void young(int r,int s,int a)
{
    if(r<s&&r<a)
        printf("\n\nram is youngest and having age =%d",r);
    else if(s<r&&s<a)
        printf("\n\nshayam is youngest and having age =%i",s);
    else
        printf("\n\najay is youngest and having age =%d",a);
}
