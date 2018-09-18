/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
#include <stdio.h>
#include <stdlib.h>
# define size 5
// count positive, negative , even and odd elements in an array
int main()
{
    int a[size];
    int i;
    printf("enter aray elements");
    for(i=0;i<size;i++)
        scanf("%d",&a[i]);
        search(a);
        getch();
}
void search(int a[]){
int i,pos=0,neg=0,even=0,odd=0;
for(i=0;i<size;i++){
    if(a[i]<0)
        neg++;
    if(a[i]>0)
        pos++;
    if(a[i]%2==0)
        even++;
    else
    odd++;

}
printf("\npositive numbers =%d",pos);
printf("\nnegative numbers =%d",neg);
printf("\neven =%d",even);
printf("\nodd numbers =%d",odd);
}
