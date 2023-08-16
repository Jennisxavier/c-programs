#include <stdio.h>
int main()
{
    int j=1;
    while(j<=5)
    {
        int i,no,fact=1;
    printf("\nenter the number:\t");
    scanf("%d",&no);
    for(i=1;i<=no;i++){
        fact*=i;
    }
    printf("\nthe factorial of the number is %d",fact);
    j++;
    }
    return 0;
}