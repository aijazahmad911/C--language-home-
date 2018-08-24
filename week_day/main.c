/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/*program to read weekday number and print weekday name */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter weekday number from 0-6 :");
    scanf("%d",&n);
    switch(n)
    {

    case 0:
        printf("sunday");
        break;
    case 1:
        printf("monday");
        break;
    case 2:
        printf("tuesday");
        break;
    case 3:
        printf("wednesday");
        break;
    case 4:
        printf("thursday");
        break;
    case 5:
        printf("friday");
        break;
    case 6:
        printf("saturday");
        break;
    default:
        printf("invalid input");
    }
    getch();
}
