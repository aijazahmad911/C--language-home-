/* By: Aijaz Ahmad Wani
email :aijazahmad9864@gmail.com
IMCA (SEM-1) */
//program to check odd even using switch case...
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("enter a number");
    scanf("%d",&n);
    switch(n%2)
    {
    case 0:
        printf("%d is even",n);
        break;
    case 1:
        printf("%d is an odd number",n);
        break;
    }
getch();

}
