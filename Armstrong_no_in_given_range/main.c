// it is not printing 153,rest of result is correct
/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to print armstrong numbers between 1 and 500
#include <stdio.h>
#include <stdlib.h>
int lenght(int);
int armstrong(int,int);
int main()
{
    int i,l=0,res;
    for(i=1;i<=500;i++){
    l=length(i);
   //printf("\nlength of %d = %d ",i,l);
   res=armstrong(i,l);
        if(i==res)
            printf("\n%d is armstrong number ",i);
        else
            continue;
    }
    getch();
}
int length(int n ){
int count=0;
while(n>0){
    n=n/10;
    count++;
    }
return(count);
}
int armstrong(int n ,int l){
int a,res=0;
while(n>0){
    a=n%10;
    res=res+pow(a,l);
    n=n/10;
}
return(res);


}
