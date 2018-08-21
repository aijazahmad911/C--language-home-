#include <stdio.h>
#include <stdlib.h>

int main()
{int a[6];
int i,n;
    printf("enter elements of an array :");
    for(i=0;i<6;i++)
        scanf("%d",&a[i]);
    printf("\nenter number to search :");
    scanf("%d",&n);
    for(i=0;i<6;i++)
    {
        if(a[i]==n){
            printf("%d found at location %d",n,i+1);
            break;
        }
        else
            printf("not found");
            break;

    }



}
