/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
subject: DATA STRUCTURES
PROGARM: READING AND WRITING OF THE ARRAY*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp;
    fp=fopen("aijaz.txt","w");
    if(fp==NULL)
    {
        printf("cannot ope file");
        exit(1);
    }
    printf("enter data");
    scanf("%c",&ch);
    fprintf(fp,"%c",ch);
    fclose(fp);

}
