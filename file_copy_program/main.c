#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    FILE *fp1,*fp2;
    fp1=fopen("source.txt","r");
    fp2=fopen("target.txt","w");
    while(1)
    {
        ch=fgetc(fp1);
        if(ch==EOF)
            break;
            else
        fputc(ch,fp2);
    }
    fclose(fp1);
    fclose(fp2);
}
