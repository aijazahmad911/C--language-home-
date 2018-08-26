/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
/*function that receives marks of student in 3 subjects
and return the average and percentage of these marks
call this function from main() and print the results in main()*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    float avg,per;
    fun(&avg,&per);
    printf("average = %f",avg);
    printf("\npercentage = %f",per);
}
void fun(float* avg,float* per){
    int m1,m2,m3,sum=0;
    printf("enter marks in 3 subjects :");
    scanf("%d%d%d",&m1,&m2,&m3);
     sum=m1+m2+m3;
     *avg=sum/3;
     *per=(sum/300.0)*100;



}

