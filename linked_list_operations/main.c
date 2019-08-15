/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-2)
Subject : DATA STRUCTURES*/
// Linked List Operations
#include <stdio.h>
#include <stdlib.h>

int menu();
void add_node();
void length();
void add_at_beginnning();
void display();


struct node {
    int data;
    struct node *link;
};
struct node *root;
int main()
{
    while(1)
    {
        system("cls");
    int ch;
    ch=menu();
    switch(ch)
    {
    case 1:
        add_node();
        break;
    case 2:
      length();
        break;
    case 3:
        add_at_beginnning();
        break;
    case 4:
        display();
        break;
    case 5:
        exit(0);
    default:
        printf("\nInvalid choice .......Try again");
    }
    getch();
    }
}

int menu()
{
    int choice;
    printf("********Linked List Opeartions*******\n\n");
    printf("1.Add Node\n2.Find length\n3.Add Node at Beginning\n4.Display\n5.exit");
    printf("\nEnter your choice : ");
    scanf("%d",&choice);
    return (choice);
}

void add_node()
{
    struct node*temp;
    temp = (struct node*)malloc(sizeof(struct node));
    printf("\nEnter data : ");
    scanf("%d",&temp->data);
    temp->link=NULL;
    if(root==NULL)
    {
        root=temp;
    }
    else
    {
        struct node *t;
        t=root;
        while(t->link!=NULL)
        {
            t=t->link;
        }
        t->link=temp;
    }

}

void length()
{
    int count=0;
    while(root!=NULL)
    {
        count++;
        root=root->link;
    }
    printf("Total no. of Nodes = %d ",count);
}

void add_at_beginnning()
{
    struct node* temp;
   temp =(struct node*)malloc(sizeof(struct node));
   printf("\nEnter data : ");
   scanf("%d",&temp->data);
   temp->link=root;
}

void display()
{
    while(root!=NULL)
    {
    printf("%d\t",root->data);
    root = root->link;
    }
}
