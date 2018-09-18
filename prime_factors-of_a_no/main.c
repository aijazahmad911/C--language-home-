/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to obtain prime factors of a number using functions
#include <stdio.h>
#include <stdlib.h>
void function(int);
int main()
{
    int n;
    printf("enter a number :");
    scanf("%d",&n);
    prime(n);
    getch();
}
void prime(int  n){
    int i=2;
    while(n!=1){
    if(n%i==0){
    printf("\n%d",i);
    n=n/i;
    }
    else{
    i++;
    continue;
    }

    }

}

