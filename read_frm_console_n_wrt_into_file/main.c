/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
// writing into file
void secondmethod();
int main()
{
    FILE *fp;
    char str[100];
    fp=fopen("file1.txt","w");
    printf("enter a string :");
    gets(str);
    fprintf(fp,"%s",str);
    fclose(fp);
}
