/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to find value of one number raised to the power of another
#include <stdio.h>
#include <stdlib.h>
#include<math.h>
void loop();
void power();
int n,p;
int main()
{
    power();
    loop();
    getch();
}
    power(){
    int res=0;
    printf("\n****by using power function**** ");
    printf("\nenter a number : \n");
    scanf("%d",&n);
    printf("enter power : \n");
    scanf("%d",&p);
    res=pow(n,p);
    printf("result= %d ", res);

}
    loop(){
    int i=1,res=1;
    printf("\n****by using loop**** ");
    printf("\nenter a number : \n");
    scanf("%d",&n);
    printf("enter power : \n");
    scanf("%d",&p);
    while(i<=p){
    res=res*n;
    i++;
    }
    printf("result= %d ", res);
}
