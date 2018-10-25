#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int validcontact(char contact[]);
int main()
{
    int choice,flag,j=1;
    char contact[10],name[20],storecontact[100];

    do{
        if (choice==1)
        {
            printf("enter name\n");
            fflush(stdin);
            gets(name);
            printf("enter mobile number\n");
            fflush(stdin);
            gets(contact);
            flag=validcontact(contact);
            if(flag==1)
            {
                FILE *contactfile;
                contactfile=fopen("contactlist.txt","a");
               // char c;
                if(contactfile==NULL)
                {
                    printf("file not found");
                    exit(0);
                }
                else
                    {
                        fputs(name,contactfile);
                        fputs("\n",contactfile);
                        fputs(contact,contactfile);
                        fputs("--------------------------------------\n",contactfile);
                        printf("contact has been added successfully");
                    }
                    fclose(contactfile);
            }
            else
            {
                printf("invalid contact");
            }
        }
        if(choice==2)
        {
            FILE* contactfile;
            contactfile=fopen("contactlist","r");
            char c;
            while(1)
            {
                if(contactfile==NULL)
                {
                    printf("contact file not found");
                    exit(0);
                }
                else
                {
                    c=fgetc(contactfile);
                    if(c==EOF)
                        break;
                    printf("%c",c);
                }
            }
            fclose(contactfile);
        }
        printf("\npress\n1- Add contact\n2-view contact list\nany other number to exit");
        scanf("%d",&choice);
    }while(choice==1||choice==2);
}
int validcontact(char contact[])
{
    int i,flag;
    if(strlen(contact)==10)
    {
        flag=1;
    }
    else
    {
        return(0);
    }
    return(flag);
}

