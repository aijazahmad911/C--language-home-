/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// reading a file and printing on console
#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char ch;
    fp=fopen("file.txt","r");
    while(1)
    {
        if(fp==NULL){
            printf("file not found");
            exit(0);
        }
        else
            {
            ch=fgetc(fp); // fgetc function automatically increments
        if(ch==EOF)
            break;
        printf("%c",ch);
    }
    }
    fclose(fp);

}
