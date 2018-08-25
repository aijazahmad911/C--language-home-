/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to print all prime numbers between 1- 300
#include <stdio.h>
#include <stdlib.h>
int main()
{
 int i=2,n=2;
printf("prime numbers between 1 and 300 are as under : \n");
for(n=2;n<=300;n++){
for(i=2;i<n;i++){
    if(n%i==0)
        {
        break;
        }
  }

if(i==n)
    printf("\n %d is prime number",n);
}
}
