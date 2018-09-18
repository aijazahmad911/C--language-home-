/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//write a function power(a,b) to calculate the value of a raised to b
#include <stdio.h>
#include <stdlib.h>
void power(int,int);
int main()
{
    int a,b;
    printf("enter a number :");
    scanf("%d",&a);
    printf("enter raised no ");
    scanf("%d",&b);
    power(a,b);
    getch();

}
void power(int a,int b)
{
    int i,ans=1;
        for(i=1;i<=b;i++)
        ans*=a;
        printf("answer = %d",ans);
}
