#include <stdio.h>
int main()
{
    int bs;
    float hra,da,gs;
    printf("enter salary:");
    scanf("%d",&bs);
    if(bs<=10000)
        {
            hra=0.2*bs;
            da=0.8*bs;
        }
    else if(bs<=20000 && bs>10000)
        {
            hra=0.25*bs;
            da=0.9*bs;
        }
    else
        {
            hra=0.30*bs;
            da=0.95*bs;
        }
    gs=bs+hra+da;
    printf("the gross salary is %f",gs);
}