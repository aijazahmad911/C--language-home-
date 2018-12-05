/* Author: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
void use_malloc();
void use_calloc();
void use_realloc();
// dynamic memory allocation
int main()
{
    use_malloc();//use of malloc() and free functions
    use_calloc();//use of calloc() function
    use_realloc();//use of realloc() function
}

void use_malloc()
{
    int n,i,sum=0;
    int *ptr;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        printf("\nNo memory allocation ");
    }
    else
    {
        printf("enter elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
            sum=sum+*(ptr+i);
        }
        printf("Entered elements are:");
        for(i=0;i<n;i++)
            printf("%d\t",*(ptr+i));
        printf("\nSum =%d\n",sum);
        free(ptr);
    }
}

void use_calloc()
{
    int n,i,sum=0;
    int *ptr;
    printf("Enter the no. of elements:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL)
    {
        printf("\nNo memory allocation ");
    }
    else
    {
        printf("enter elements:\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",(ptr+i));
            sum=sum+*(ptr+i);
        }
        printf("Entered elements are:");
        for(i=0;i<n;i++)
            printf("%d\t",*(ptr+i));
        printf("\nSum =%d\t",sum);
        free(ptr);
    }
}

void use_realloc()
{
int *ptr, i , n1, n2;
    printf("Enter size of array: ");
    scanf("%d", &n1);

    ptr = (int*) malloc(n1 * sizeof(int));

    printf("Addresses of previously allocated memory: ");
    for(i = 0; i < n1; ++i)
         printf("%u\n",ptr + i);

    printf("\nEnter new size of array: ");
    scanf("%d", &n2);
    ptr = realloc(ptr, n2 * sizeof(int));

    printf("Addresses of newly allocated memory: ");
    for(i = 0; i < n2; ++i)
         printf("%u\n", ptr + i);
}
