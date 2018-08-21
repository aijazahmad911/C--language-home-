/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to count positive,negative and zeros,till user wants
#include <stdio.h>
#include <stdlib.h>
int main()
{
    char ch;
    int n;
    int pos=0,neg=0,zero=0;
    label:{
    printf("\nenter a number : ");
    scanf("%d",&n);
   // while(ch=='y'||ch=='Y'){

    if(n>0)
        pos++;
    else if(n<0)
        neg++;
    else{
        if(n==0)
        zero++;
        }
    printf("\ndo you want to continue : ");
    scanf(" %c",&ch);}
    if(ch=='y'||ch=='Y')
        goto label;

    printf("\nyou entered %d positive numbers",pos);
    printf("\nyou entered %d negative numbers",neg);
    printf("\nyou entered %d zeros",zero);
    getch();
    }

