/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// 1: check whether the entered character is lower case alphabet or not
// 2: check whether the entered character is special symbol or not
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter a character : ");
    scanf("%c",&ch);
    lowercase(ch);
    special(ch);
    getch();
}
void lowercase(char ch){
if(ch>=97&&ch<=122)
    printf("entered character is in lower case\n");
    else printf("entered character is not in lower case\n");
}
void special(char ch){
if((ch<48&&ch>=0)||(ch>58&&ch<65)||(ch>90&&ch<97)||ch>122)
    printf("special character \n");

}
