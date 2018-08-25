/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int stringlength(char*);
int main()
{
    char a[30];
    int l,len;
    printf("enter your name : ");
    gets(a);
    l=strlen(a);
    printf("length of %s is %d ",a,l);
    len=stringlength(a);
    printf("\nlength of %s is %d",a,len);
    getch();
}
int stringlength(char a[]){
int count=0,i=0;
while(a[i]!='\0'){
    count++;
    i++;
        }
return(count);
}

