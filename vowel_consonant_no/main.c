/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to check whether inputted character is vowel or consonant
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("enter a character    ");
    scanf("%c",&ch);
    if((ch>'a'&&ch<'z')||(ch>'A'&&ch<'z'))
    {
    switch(ch)
    {

    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
        printf("%c is vowel",ch);
        break;
    default:
        printf("%c is consonant",ch);
    }
    }
    else
    {
        if(ch>='0'&&ch<'9')
            printf("%c is a number", ch);

    }

getch();

}


