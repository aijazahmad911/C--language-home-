/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to print ASCII values and their equivalent characters using a while loop
#include <stdio.h>
#include <stdlib.h>

int main()
{
int i=0;
char ch;
while(i<=255){
    printf("\nASCII value %d\t equivalent character %c",i,i);
    i++;
}
getch();

}
