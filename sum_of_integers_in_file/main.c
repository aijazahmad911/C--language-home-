/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
// sum of integers in a file
//pending..........
int main()
{
    char ch;
    int sum=0;
    FILE *fp;
    fp=fopen("numbers.txt","r");
    while(1)
    {
            ch=fgetc(fp);
            if(ch==EOF)
                break;
            else{
                if(ch>='0'&&ch<='9')
                sum=sum+ch;
                }
    }

    printf("sum = %d",sum);
     fclose(fp);
}
