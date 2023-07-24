#include <stdio.h>
int main()
{
    int qty,discount;
    float rate,total;
    printf("enter the qty and rate:\t");
    scanf("%d%f",&qty,&rate);
    if (qty >=1000)
    discount=10;
    else
    discount=0;
    total=(qty*rate)-(qty*rate*discount/100);
    printf("the total amount is:Rs.%f",total);
    return 0;
}