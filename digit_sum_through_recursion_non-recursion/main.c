/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */

/*calculate sum of digits of a number by recursive
 and non recursive function */
 int recursive(int);
 int nonrecursive(int);
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n,s1,s2;
    printf("enter a number :");
    scanf("%d",&n);
    s1=recursive(n);
    printf("sum 0f digits using recursion = %d",s1);
    s2=nonrecursive(n);
    printf("\nsum 0f digits without  using recursion = %d",s2);
    getch();
}
int recursive (int n ){
    int sum=0,a;
    if(n!=0){
    a=n%10;
    sum+=a+recursive(n/10);
    }
    return(sum);
}

int nonrecursive(int n){
    int sum=0,a,i;
    while(n!=0)
    {
        a=n%10;
        n=n/10;
        sum=sum+a;
        i++;
        }
return(sum);
}
