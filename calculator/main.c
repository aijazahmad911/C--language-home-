#include <stdio.h>
#include <stdlib.h>
int add();
int mul();
int sub();
int divi();
int choice();
void cal(c);
int main()
{
    while(1){
    int c;
    char ch;
    aijaz:
    c=choice();
    cal(c);
    printf("Do you want to continue (y/n):");
    scanf(" %c",&ch);
    if(ch=='y')
        goto aijaz;
    else
        exit(0);
    }



}
int choice(){
    int n;
printf("1: Addition.\n");
printf("2: Subtraction.\n");
printf("3: Multiplication.\n");
printf("4: Division.\n");
printf("enter your choice :");
scanf("%d",&n);
return(n);
}
void cal(int c){
    int r;
    switch(c){
        case 1:
            {
            r=add();
            printf("Result = %d",r);
            break;
        }
        case 2:
            {
            r=sub();
            printf("Result = %d",r);
            break;
        }
        case 3:
            {
            r=mul();
            printf("Result = %d",r);
            break;
        }
        case 4:
            {
            r=divi();
            printf("Result = %d",r);
            break;
        }

        }
    }

int add(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    return(a+b);

}
int sub(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    return(a-b);

}
int mul(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    return(a*b);

}
int divi(){
    int a,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    return(a/b);

}
