/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1)
Date: 17-9-2018*/
// library management system
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int menu();
void add();
void display();
struct val{
    char bname[40];
    char date[20];
    char cname[40];
    char mn[12];
    int cost
    };

int ch,a;
struct val e;
int main()
{
    while(1){
    a=menu();
    switch(a)
    {
    case 1:
       add();
        break;
    case 2:
      display();
        break;
    case 3:
        exit(0);
    }
    }

}
int menu()
{
    printf("\n1.Add a Book");
    printf("\n2.Display details on a specific date");
    printf("\n3. EXIT");
    printf("\nenter your choice: ");
    scanf("%d",&ch);
    return(ch);
}
void add()
{
    FILE *fp;

    printf("\nenter date :");
    scanf("%s",e.date);
    printf("\nenter name :");
    scanf("%s",e.cname);
    printf("\nenter mobile number :");

    scanf("%s",e.mn);
    printf("\nenter name of book :");
    scanf("%s",e.bname);

    printf("\nenter cost of book :");
    fflush(stdin);
    scanf("%d",&e.cost);
    fp=fopen("add.txt","a");
    fprintf(fp,"%s%s%s%s%d\n",e.date,e.cname,e.mn,e.bname,e.cost);
    fclose(fp);

}
void display()
{
    int res;
    FILE *fp;
    char dte[10];
    printf("enter date");
    fflush(stdin);
    gets(dte);
    fp=fopen("add.txt","r");
    while(fscanf(fp,"%s%s%s%s%d",e.date,e.cname,e.mn,e.bname,e.cost)!=EOF)
    {
        res=strcmp(e.date,dte);
        if(res==0)
        {
            printf("\n\n customer name=%s",e.cname);
            printf("\n\n mobile no=%s",e.mn);
            printf("\n\n book name=%s",e.bname);
            printf("\n\n book cost=%s",e.cost);
        }
    }
    fclose(fp);


}
