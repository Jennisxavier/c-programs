#include <stdio.h>
int main()
{
    float bs,hra,da,gs;
    printf("enter basic salary:\n");
    scanf("%f",&bs);
    if (bs<1500)
    {
        hra=bs*10/100;
        da=bs*90/100;
    }
    else {
    
        hra=500;
        da=bs*98/100;
    }
    gs=hra+da+bs;
    printf("the gross salary is:Rs%f",gs);
    return 0;
}