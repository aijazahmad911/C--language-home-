//program to print gross salary
#include <stdio.h>
#include <stdlib.h>
main()
{
    // local declaration
    float bs,da,hra,gs;
    //input section
    printf("enter salary :");
    scanf("%f",&bs);
 //calculations
    da=40/100*bs;
    hra=20/100*bs
    gs=bs+da+hra;
    //result
    printf("gross salary =%f",gs);

}
