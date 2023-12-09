#include<stdio.h>
int dectobin(int n);
int main()
{
    int n=30;
    if(n==0)
    {
        printf("0");
    }
    else
    {
        dectobin(n);
        printf("\n");
    }
}
int dectobin(int n)
{
    if(n>0)
    {
        dectobin(n/2);
        printf("%d",n%2);
    }
}