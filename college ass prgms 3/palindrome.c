#include<stdio.h>
int main()
{
    int originalN,n,rev=0,dig;
    printf("enter no:");
    scanf("%d",&n);
    originalN=n;
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        n=n/10;
    }
    printf("reverse of the no is %d\n",rev);
    if(originalN==rev)
    printf("its palindromic");
    else
    printf("not palindromic");
return 0;
}