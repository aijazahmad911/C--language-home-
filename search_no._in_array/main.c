/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/* program to find if the number to be searched is present in the array and if it
is present, count the no. of times it appears in array*/
#include <stdio.h>
#include <stdlib.h>
# define size 5

int main()
{
    int a[size];
    int i,n,count=0;
    printf("enter elements :");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nenter number to be searched : ");
    scanf("%d",&n);
    search(a,n);
    getch();
}
void search(int a[],int n){
int i,count=0;
for(i=0;i<size;i++){
    if(n==a[i]){
        printf("\nnumber found at %dth position",i+1);
        count++;
    }
}
if(count==0)
    printf("\nnumber not found");
if(count!=0)
printf("\n count =%d",count);
}
