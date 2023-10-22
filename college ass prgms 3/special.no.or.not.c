#include<stdio.h>
int main()
{
    int n,originalN,sum=0,digit,i;
    printf("enter no:");
    scanf("%d",&n);
    originalN=n;
    while(n>0)
        {
            int fact=1;
            digit=n%10;
            for(i=1;i<=digit;i++)
            fact*=i;
        sum+=fact;
        n=n/10;
        }
    if(sum==originalN)
        printf("%d is a strong no",originalN);
    else
        printf("%d is not a strong no",originalN);
    return 0;
}