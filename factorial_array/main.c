#include <stdio.h>
#include <stdlib.h>

int main()
{
    int array[3][3],i,j;
    printf("enter elements of 3*3 matrix :");
    for(i=0;i<3;i++){
            for(j=0;j<3;j++)
        scanf("%d",&array[i][j]);
    }
    for(i=0;i<3;i++){
        for(j=0;j<3;j++)
        printf("%d ",array[i][j]);
        printf("\n");
    }
}
