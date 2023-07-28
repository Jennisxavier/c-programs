#include <stdio.h>
int main()
{
    int year;
    printf("enetr a year\n");
    scanf("%d",&year);
    if (year%4==0)
    {printf("\n%d is a leap year",year);}
    else
    {printf("\n %d is not a leap yaer",year);}
    return 0;
}