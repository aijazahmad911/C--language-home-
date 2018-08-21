/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/*program to find average of a class*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,i,sum=0;
int a[n];
 float avg;
 printf("enter number of students in a class :");
 scanf("%d",&n);
// int a[n];
 printf("\nenter marks of all students : ");
  for(i=0;i<n;i++)
  {
 scanf("%d",&a[i]);
sum=sum+a[i];
  }
 avg=sum/n;
 printf("average = %f",avg);
getch();
}

