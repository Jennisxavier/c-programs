#include<stdio.h>
int main()
{
    int n,rev=0,dig;
    printf("enter no:");
    scanf("%d",&n);
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    printf("reverse of the no is %d",rev);
}