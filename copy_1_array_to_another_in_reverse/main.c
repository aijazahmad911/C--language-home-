/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//copy the contents of one array into another in reverse order
#include <stdio.h>
#include <stdlib.h>
#define size 10
int main()
{
    int i,b;
    int source[size];
    int target[size];
    printf("enter elements :");
    for(i=0;i<size;i++)
        scanf("%d",&source[i]);
    for(i=size-1,b=0;b<size;i--,b++)
   target[b]=source[i];


    printf("array in reverse");
   for(b=0;b<size;b++)
        printf("\n%d",target[b]);
    getch();
}
