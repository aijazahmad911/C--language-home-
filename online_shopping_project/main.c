/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// online shopping project
#include <stdio.h>
#include <stdlib.h>
void mainmenu();
int total;
int main()
{
    char con;

    printf("***********************************************SHOPCLUES.COM**********************************************");
    char name[40];
    printf("\nenter your name :");
    gets(name);
    printf("\nHello! %s\n welcome to our online shopping website\n\n\n\n",name);
    mainmenu();
    while(1)
    {
        printf("\nDO YOU WANT TO BUY MORE ITEMS (Y/N)");
        scanf(" %c",&con);
        if(con=='Y'||con=='y')
            mainmenu();
      else
            exit(0);
    }
    getch();
}
void mainmenu(){
    int choice,mc,fw,me;
    int a;

printf("1. MOBILES & ELECTRONICS\n");
printf("2. FOOTWEAR\n");
printf("3. MEN'S CLOTHING\n");
printf("4. EXIT\n");
printf("enter your choice :");
scanf("%d",&choice);

switch(choice){
case 1:
    {
        printf("1. SANDISK 64 GB - RS 800\n");
        printf("2. LENOVO LAPTOP - RS 40000\n");
        printf("3. MI REDMI 5 - RS 13000\n");
        printf("4. SAMSUNG TV - RS 25000\n");
        printf("Enter your choice :");
        scanf("%d",&me);
    switch(me){
        case 1:
        {
        printf("you choose SANDISK 64 GB for RS 800, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=800;
                printf("total = RS %d",total);
                }
        break;
        }
        case 2:
        {
        printf("you choose LENOVO LAPTOP for RS 40000, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=40000;
                printf("total = RS %d",total);
                }
        break;
        }
        case 3:
        {
        printf("you choose MI REDMI 5 for RS 13000, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=13000;
                printf("total = RS %d",total);
                }
        break;
        }
        case 4:
        {
        printf("you choose SAMSUNG TV  for RS 25000, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=25000;
                printf("total = RS %d",total);
                }

        break;
        }
        }
        break;
    }


case 2:
    {

        printf("1.  ADIDAS - RS 4000\n");
        printf("2. NIKE - RS 7000\n");
        printf("3. PUMA - RS 3000\n");
        printf("4. WOODLAND - RS 8000\n");
        printf("Enter your choice :");
        scanf("%d",&fw);
    switch(fw)
    {
        case 1:
        {
        printf("you choose ADIDAS for RS 4000, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=4000;
                printf("total = RS %d",total);
                }
        break;
        }
        case 2:
        {
        printf("you choose NIKE for RS 7000, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=7000;
                printf("total = RS %d",total);
                }
        break;
        }
        case 3:
        {
        printf("you choose PUMA for RS 3000, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=3000;
                printf("total = RS %d",total);
                }
        break;
        }
        case 4:
        {
        printf("you choose WOODLAND  for RS 8000, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=8000;
                printf("total = RS %d",total);
                }

        break;
        }
        }

        break;
    }
case 3:
    {

        printf("1. T-SHIRT - RS 700\n");
        printf("2. SHIRT - RS 1100\n");
        printf("3. TROUSER - RS 1200\n");
        printf("4. JACKET - RS 1500\n");
        printf("Enter your choice :");
        scanf("%d",&mc);
    switch(mc){
        case 1:
        {
        printf("you choose T- SHIRT for RS 700, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=700;
                printf("total = RS %d",total);
                }
        break;
        }
        case 2:
        {
        printf("you choose SHIRT for RS 1100, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=1100;
                printf("total = RS %d",total);
                }
        break;
        }
        case 3:
        {
        printf("you choose TROUSER for RS 1200, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=1200;
                printf("total = RS %d",total);
                }
        break;
        }
        case 4:
        {
        printf("you choose JACKET for RS 1500, \n are you sure you want to buy it. if YES enter 1 else 0 ");
        scanf("%d",&a);
        if(a==1)
                {
                total+=1500;
                printf("total = RS %d",total);
                }

        break;
        }
        }

        break;
    }
case 4:
    exit(1);

}
}






