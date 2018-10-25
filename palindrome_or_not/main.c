/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to check whether a no. is palindrome or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,rev=0,temp,a;
    printf("enter a number : ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        a=n%10;
        rev=rev*10+a;
        n=n/10;
    }
    if(rev==temp)
        printf("\ngiven number is PALINDROME");

        else
            printf("NOT PALINDROME");
}
