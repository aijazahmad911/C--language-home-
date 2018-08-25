/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to reverse a string
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    int i=0,temp,l=0;
    char a[30];
    printf("enter a string :  ");
    gets(a);
    l=strlen(a);
    reverse(l,a);
    printf("length = %d",l);
    printf("\nreverse string \n");\
    for(i=0;i<=l;i++)
    printf("%c",a[i]);
    getch();

}
void reverse(int l,char a[])
{
        int i=0,temp;
        while(i<l){
        temp=a[i];
        a[i]=a[l];
        a[l]=temp;
        i++;
        l--;
    }
}
