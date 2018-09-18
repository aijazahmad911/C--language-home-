/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
# define size 3
// example program on array of structures
struct book{
    char name;
    float price;
    int pages;
};
int main()
{
    struct book a[size];
    int i;
    printf("enter name, price and page numbers");
    for(i=0;i<size;i++)
    {
        fflush(stdin);
        scanf("%c",&a[i].name);
        scanf("%f",&a[i].price);
        scanf("%d",&a[i].pages);
    }
    printf("your entered data\n");
    for(i=0;i<size;i++){
        printf("\nname=%c\tprice =%f\tpage no's =%d",a[i].name,a[i].price,a[i].pages);
   }
    getch();
}
