/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
void search(int*,int);

int main()
{
    int array[25];
    int i,s;
    printf("enter the numbers :");
    for(i=0;i<5;i++){
        scanf("%d",&array[i]);
    }
    printf("enter a number to search :");
    scanf("%d",&s);
    search(array,s);
    getch();
}
void search(int* a,int s)
{int count=0,i;
for(i=0;i<25;i++)
    {
        if(*a==s)
        {
            count++;
        }
        a++;

    }
    if(count>0)
    {
        printf("number found");
    }
    if(count==0)
        printf("\nsorry  not found");
}
