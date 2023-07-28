/*remaider program*/
#include <stdio.h>
int main()
{
    int dividend,divisor,remainder;
    printf("enter the dividend:\n");
    scanf("%d",&dividend);
    printf("enter the divisor:\n");
    scanf("%d",&divisor);
    remainder=dividend%divisor;
    printf("the remainder is:%d\n",remainder); 
    return 0;
}