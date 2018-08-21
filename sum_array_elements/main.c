/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// sum of array elements
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int a[10],i,sum=0;
  printf("enter numbers :");
  for(i=0;i<10;i++)
    scanf("%d",&a[i]);
    for (i=0;i<10;i++)
    {
        sum=sum+a[i];
}
    printf("sum =%d",sum);
    getch();
    }
