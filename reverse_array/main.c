/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
// program to reverse array
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i;
    printf("Enter no. of elements you want to enter : ");
    scanf("%d",&n);
    int arr[n];
    printf("\nEnter array eleements  :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    reverse(arr,n);//to reverse array elements
    printf("\nArray in reverse order:\n");
    for(i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
}

void reverse(int* arr,int n)
{
    int i=0,temp;
    while(i<n)
    {
        temp=arr[n-1];
        arr[n-1]=arr[i];
        arr[i]=temp;
        i++;
        n--;
    }

}
