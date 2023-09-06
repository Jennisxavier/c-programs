//cal rams gross
#include <stdio.h>
int main()
{
    float bp,da,hra,grpay;
    printf("enter basic salary of ram");
    scanf("%f",&bp);
    da=0.4*bp;
    hra=0.2*bp;
    grpay=bp+da+hra;
    printf("basic salary of ram");
    return 0;
}