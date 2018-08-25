/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to check whether entered number is prime or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i=2;
    printf("enter a number : ");
    scanf("%d",&n);
    for(i=2;i<n;i++){
        if(n%i==0){
        printf("not a prime number ");
        break;
        }
    }
   if(n==i)
   printf("prime number ");
   getch();
}
