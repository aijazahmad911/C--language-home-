/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 17-8-2019
*/
//program to find grace marks of a student
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c,sub;
    printf("Enter class and no. of subjects failed: ");
    scanf("%d%d",&c,&sub);
    switch(c)
    {
        case 1:
            if(sub<=3)
                printf("student gets total %d grace marks\n",sub*5);
            else
                printf("No grace marks");
                break;
        case 2:
            if(sub<=2)
                printf("student gets total %d grace marks\n",sub*4);
            else
                printf("No grace marks");
                break;
        case 3:
            if(sub==1)
                printf("student gets 5 grace marks ");
            else
                printf("No grace marks");
            break;
        default:
            printf("Wrong class entered\n");


    }
}
