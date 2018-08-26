/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/*write a function that receives 5 integers
and returns the sum and average of these numbers.
call this function from main() and print the results in main()*/
#include <stdio.h>
#include <stdlib.h>
void fun(int*,float*);
int main()
{
    int sum;
    float avg;
    fun(&sum,&avg);
    printf("sum = %d",sum);
    printf("\naverage = %f",avg);
    getch();
}
void fun(int* sum,float* avg){
int n1,n2,n3,n4,n5;
printf("enter 5 numbers : ");
scanf("%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5);
*sum=n1+n2+n3+n4+n5;
*avg=*sum/5;

}
