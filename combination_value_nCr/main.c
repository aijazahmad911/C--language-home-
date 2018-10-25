/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// calculate combination value nCr
#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int n,r,a;
    float result;
    printf("enter value of n in nCr : ");
    scanf("%d",&n);
     printf("enter value of r in nCr : ");
    scanf("%d",&r);
    if(n>=r&&n>=0&&r>=0)
    {

    a=n-r;
    result=(float)fact(n)/(fact(r)*fact(a));
    printf("result of %dC%d = %f",n,r,result);
    }
    else
        printf("invalid input");
}
int fact(int n){
    int result=1;
    while(n>0)
    {
        result=result*n;
        n--;
    }
    return(result);
}
