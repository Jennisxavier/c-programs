/*calculation of gross salary*/
#include<stdio.h>
int main()
{
    float bs,da,hra,gross;
    printf("enter rameshs basic salary:\t");
    scanf("%f",&bs);
    da=0.4*bs;
    hra=0.2*bs;
    gross=bs+da+hra;
    printf("basic salary of ramesh:%f\n",bs);
    printf("da of ramesh:%f",da);
    printf("hra of ramesh:%f",hra);
    printf("gross of ramesh:%f",gross);
    return 0;
}
