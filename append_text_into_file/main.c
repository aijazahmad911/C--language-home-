/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
// append text into a file
int main()
{
    FILE* fp;
    char str[40 ];
    fp=fopen("aijaz.txt","a");
    while(1)
    {
        if(fp==NULL){
            printf("cannot open file");
            exit(0);
        }
        else
        {
            printf("enter text :");
            gets(str);
            fprintf(fp,"%s",str);
            break;
        }
    fclose(fp);
    }

}
