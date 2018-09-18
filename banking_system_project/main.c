/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1)
Date : 17-9-2018*/
// banking system project
#include <stdio.h>
#include <stdlib.h>
int menu();
void deposit();
void last();
void withdraw();
void transfer();
void checkdetail();
int totalamount=1000,amount,with,trans,totaldeposit=0,totalwithdraw=0,totaltransfer=0;
int ac;
char name[50];
int main()
{
    printf("enter your name: ");
    gets(name);
    printf("enter your account number: ");
    scanf("%d",&ac);
    while(1)
    {
    switch(menu())
{
    case 1:
        deposit();
        totaldeposit=totaldeposit+amount;
        break;

    case 2:
        withdraw();
        if(with<=totalamount)
        totalwithdraw+=with;
        break;
    case 3:
        transfer();
        if(trans<=totalamount)
        totaltransfer+=trans;
        break;
    case 4:
        checkdetail();
        break;
    case 5:
        last();
        getch();
        exit(0);
    default :
        printf("invalid input");
}
    }
}
int menu()
{
    int ch;
    printf("\n1. Deposit Amount\n");
    printf("2. Withdraw Amount\n");
    printf("3. Transfer Money\n");
    printf("4. Check Detail\n");
    printf("5. Exit\n");
    printf("\nEnter your choice");
    scanf("%d",&ch);
    return(ch);
}

void deposit()
{
    printf("\n Enter amount you want to deposit :");
    scanf("%d",&amount);
    totalamount=totalamount+amount;
}

void withdraw()
{
    printf("\nEnter amount you want to withdraw :");
    scanf("%d",&with);
    if(with<=totalamount)
    totalamount=totalamount-with;
    else
        printf("account showing minimum balance\nTRANSACTION CANCELLED");
}

void transfer()
{
   printf("\nenter amount you want to transfer :");
   scanf("%d",&trans);
   if(trans<=totalamount)
    totalamount=totalamount-trans;
   else
    printf("account showing minimum balance\nTRANSACTION CANCELLED");
}

void checkdetail()
{

    printf("\nTotal Amount= %d",totalamount);
    printf("\nTotal Amount Deposited= %d",totaldeposit);
    printf("\nTotal Amount Withdrawen= %d",totalwithdraw);
    printf("\n Total Transfer Amount= %d",totaltransfer);
}

void last()
{

printf("\n********************************************\n");
    printf("\n your name=%s",name);
    printf("\naccount number =%d",ac);
    printf("\nTotal Amount= %d",totalamount);
    printf("\nTotal Amount Deposited= %d",totaldeposit);
    printf("\nTotal Amount Withdrawen= %d",totalwithdraw);
    printf("\n Total Transfer Amount= %d",totaltransfer);
    printf("\n ******************Thanks for chosing JK BANK********************");
}
