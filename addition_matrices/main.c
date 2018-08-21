/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    int a[3][3];
    int b[3][3];
    int c[3][3];
    printf("enter elements of first matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
    }
    printf("enter elements of second matrix :");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            scanf("%d",&b[i][j]);
    }
    //processing
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
            c[i][j]=a[i][j]+b[i][j];
    }
    printf("summation is :\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)

    printf("%d  ",c[i][j]);
    printf("\n");
}
getch();
}
