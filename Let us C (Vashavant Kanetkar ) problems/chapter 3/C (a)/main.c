/*
Author: Aijaz Ahmad Wani
email: aijazahmad9864@gmail.com
Date: 15-8-2019
*/
// profit / loss

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cp,sp,profit=0,loss=0;
    printf("Enter Cost price: ");
    scanf("%d",&cp);
    printf("Enter selling price: ");
    scanf("%d",&sp);

    if(sp>cp)
    {
        profit=sp-cp;
        printf("Seller has made profit of %d ",profit);
    }
    else if(sp==cp)
    {
        printf("No profit , No loss");
    }
    else
    {
        loss=cp-sp;
        printf("Seller has incurred loss of %d ",loss);
    }
}
