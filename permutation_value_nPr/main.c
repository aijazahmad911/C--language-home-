/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// calculate permutation value nPr
#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int n,r,a;
    float result;
    printf("enter value of n in nPr : ");
    scanf("%d",&n);
     printf("enter value of r in nPr : ");
    scanf("%d",&r);
    if(n>=r&&n>=0&&r>=0)
    {

    a=n-r;
    result=(float)fact(n)/fact(a);
    printf("result of %dP%d = %f",n,r,result);
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
