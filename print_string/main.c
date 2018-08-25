/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
void usingloop(char*);
void fun(char*);
void m3(char*);
int main()
{
    int i;
    char name[20];
    usingloop(name);
    fun(name);
    m3(name);
    getch();
}
void usingloop(char name[]){
    int i;
    printf("Q.No.1: Enter your name : ");
    for(i=0;i<20;i++){
    scanf("%c",&name[i]);
    }
    printf("\nyour name is ");
      for(i=0;i<=20;i++){
    printf("%c",name[i]);
    getch();
    }
}

void fun(char name[]){
printf("Q.No.2: where u live ? :");
gets(name);
printf("i live at %s",name);
}

void m3(char name[]){
printf("\nQ.No.3: what u do ? :");
gets(name);
puts(name);
}

