/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// sum of series 1+1/2+1/3+1/4......1/N
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    float result=0;
    printf("enter the value of N ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    result=result+(float)1/i;
    }

    printf("result =%f",result);
}
