/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>

int main()
{int i,j,k;
    int a[3][3],b[3][3],c[3][3];
    printf("enter elements of first array : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
        printf("enter elements of second array : ");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }
       for(i=0;i<3;i++){
        for(j=0;j<3;j++){
                c[i][j]=0;
           for(k=0;k<=2;k++)
            c[i][j]=c[i][j]+a[i][k]*b[k][j];
        }
    }
    printf("multiplication of two matrices is given below :\n");
   for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d\t",c[i][j]);
                        }
        printf("\n");
                }
getch();

}
