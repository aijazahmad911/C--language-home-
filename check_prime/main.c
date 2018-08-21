/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/*program to check whether inputted no. is prime or not*/
#include <stdio.h>
#include <stdlib.h>
int main()
{

    int num,i=2;
    printf("enter number");
    scanf("%d",&num);


    while(i<num)
    {
        if(num%i==0)
        {

            printf("not prime\n");
            break;
        }
        i++;
    }
    if(i==num)
        printf("prime\n");
        getch();

    }
