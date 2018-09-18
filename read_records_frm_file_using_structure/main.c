/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//read records from a file using structures
#include <stdio.h>
#include <stdlib.h>

struct emp{
char name[40];
int age;
float bs;

};
int main()
{
    FILE *fp;
    struct emp a;
    fp=fopen("test.txt","r");
    if(fp==NULL)
    {
        printf("cannot open file");
        exit(0);
    }
    while(fscanf(fp,"%s%d%f",a.name,&a.age,&a.bs)!=EOF)
    printf("%s%d%f",a.name,a.age,a.bs);
    fclose(fp);
}
