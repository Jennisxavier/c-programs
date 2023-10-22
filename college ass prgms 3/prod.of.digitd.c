#include <stdio.h>
int main()
{
    int n,dig,prod=1;
    printf("no:");
    scanf("%d",&n);
    while(n>0)
        {
            dig=n%10;
            prod=dig*prod;
            n=n/10;
        }
    printf("prod is %d\n",prod);
    return 0;
}