/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to multiply using addition
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,i,result=0;
    printf("enter num1 : ");
    scanf("%d",&num1);
    printf("enter num2 : ");
    scanf("%d",&num2);
    for(i=1;i<=num2;i++)
        result=result+num1;
    printf("%d * %d = %d",num1,num2,result);
}
