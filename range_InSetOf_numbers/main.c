/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//to find range of a set of a numbers
#include <stdio.h>
#include <stdlib.h>
int min(int*,int);
int max(int*,int);
int main()
{
    int i,s=0,count,m,n;
    printf("how many numbers you want to enter :");
    scanf("%d",&count);
    int a[count];
    printf("\nenter numbers :");
    for(i=0;i<count;i++){
        scanf("%d",&a[i]);
    }
    m=min(a,count);
    printf("\nmin= %d",m);
    n=max(a,count);
    printf("\nmax= %d",n);
    s=n-m;
    printf("\nrange= %d",s);
    getch();
}
int max(int* a,int count){
    int n=0,i;
    for(i=0;i<count;i++){
        if(*(a)>n)
            n=*(a);
            a++;
    }
return(n);
}
int min(int* a,int count){
    int n=0,i;
    for(i=0;i<count;i++){
        if(*(a)<n)
            n=*(a);
            a++;
    }
return(n);
}

