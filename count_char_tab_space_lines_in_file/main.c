#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    int nos=0,noc=0,nol=0,not=0;
    char ch;
    fp=fopen("file.txt","r");\
    while(1)
    {
        ch=fgetc(fp);
        if(ch==EOF)
            break;
        noc++;
            if(ch=='\n')
            nol++;
            if(ch=='\t')
            not++;
            if(ch==' ')
            nos++;
    }
    fclose(fp);
    printf("\nnumber of characters = %d",noc);
    printf("\nnumber of lines = %d",nol);
    printf("\nnumber of tabs = %d",not);
    printf("\nnumber of spaces = %d",nos);
    return(0);
}
