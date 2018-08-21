/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
#define size 5
void minmax(int*);
int main()
{int i;
int array[size];
printf("enter the numbers :");
for(i=0;i<size;i++)
    scanf("%d",&array[i]);
minmax(array);
getch();
}
void minmax(int* a)
{int i;
    int max=0,min=*a;
    for(i=0;i<size;i++)
    {
    if(*(a)>max){
        max=*a;}
    if(*(a)<min){
        min=*a;}
        a++;
    }
    printf("\nmaximum number =%d",max);
    printf("\nminimum number =%d",min);
}
