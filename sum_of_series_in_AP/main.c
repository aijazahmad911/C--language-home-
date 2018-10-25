/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// sum of series in A.P
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2,d,l,n;
    float res;
    printf("enter first two terms of an A.P. ");
    scanf("%d%d",&n1,&n2);
    d=n2-n1;
    printf("enter last term of series : ");
    scanf("%d",&l);
   n=(l-n1+d)/d;
   res=(float)n/2*(n1+l);
   printf("result =%f",res);
}
