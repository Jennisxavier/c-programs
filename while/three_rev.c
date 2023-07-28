#include <stdio.h>
int main()
{
    int n,a,rev=0;
    printf("enter a three digit no:\t");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    rev=rev+a*100;
    a=n%10;
    n=n/10;
    rev=rev+a*10;
    a=n%10;
    n=n/10;
    rev=rev+a*1;
    printf("the rev no is %d",rev);
    return 0;
}