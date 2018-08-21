/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;
    printf("enter the coordinates of a point :");
    scanf("%d%d",&x,&y);
    if(x==0&&y==0)
        printf("point lies at origin\n");
    else if(x==0&&y!=0)
        printf("point lies on y axis \n");
    else if (x!=0&&y==0)
        printf("point lies on x axis \n");
    else
        printf("point neither lies on x-axis nor y-axis");
        getch();
}
