/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to check whether the triangle is isosceles, equilateral,scalene or right angled triangle
#include <stdio.h>
#include <stdlib.h>
void tri(int,int,int);
void rt(int,int,int);
int main()
{
    int a,b,c;
    printf("enter sides of a triangle : ");
    scanf("%d%d%d",&a,&b,&c);
    tri(a,b,c);
    rt(a,b,c);
    getch();

}
void tri(int a,int b,int c){
    if(a==b&&b==c)
        printf("equilateral triangle \n");
    else if(a==b||b==c)
        printf("isosceles triangle \n");
    else if(a!=b&&b!=c)
        printf("scalene triangle \n");
}void rt(int a ,int b,int c){
    if(a>b&&a>c){
        if((a*a)==((b*b)+(c*c)))
            printf("right angles triangle \n");
      }
    else if(b>c&&b>a){
        if((b*b)==(a*a)+(c*c))
            printf("right angled triangle \n");
    }
    else if(c>a&&c>b){
        if((c*c)==(b*b)+(a*a))
            printf("right angles triangle \n");
    }


}
