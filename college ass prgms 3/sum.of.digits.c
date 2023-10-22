#include <stdio.h>
int main()
{
    int n,sum=0,dig;
    printf("no:");
    scanf("%d",&n);
    while(n>0)
    {
        dig=n%10;
        sum=sum+dig;
        n=n/10;
    }
    printf("%d",sum);
    return 0;
}