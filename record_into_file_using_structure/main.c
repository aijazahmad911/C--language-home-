/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// writes records to a file using structure
#include <stdio.h>
#include <stdlib.h>
#include<conio.h>

int main()
{
    struct emp{
    char name[60];
    int age;
    float bs;
};
    struct emp e;
    char ch='y';
    FILE *fp;
    fp=fopen("test.txt","w");

    if(fp==NULL){
        printf("cannot open file");
        exit(1);
    }
  while(ch=='y'||ch=='Y'){
        printf("\nenter name :");
        scanf("%s",e.name);
        printf("\nenter age :");
        scanf(" %d",&e.age);
        printf("\nenter basic salary:");
        scanf(" %f",&e.bs);
        fprintf(fp,"\n%s  %d  %f",e.name,e.age,e.bs);
        printf("\ndo you want to add more (y/n) :");
        fflush(stdin);
        ch=getch();
  }
            fclose(fp);

}
