/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// sum of series 1/1!+2/2!+3/3!+.....+n/n!
#include <stdio.h>
#include <stdlib.h>
int fact(int);
int main()
{
    int n,i;
    float result=0;
    printf("enter the value of n ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    result=result+(float)i/fact(i);
    printf("result=%f",result);
}
int fact(int n){
    int res=1;
    while(n>0){
        res=res*n;
    n--;
    }

return(res);
}
