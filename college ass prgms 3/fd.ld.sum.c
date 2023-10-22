#include <stdio.h>
int main()
{
    int n,fd,ld,temp,s=0;
    printf("no:");
    scanf("%d",&n);
    ld=n%10;
    while(n>=10)
    {
        n=n/10;
    }
    fd=n;
    s=fd+ld;
    printf("first dig is %d and last dig is %d\n",fd,ld);
    printf("sum is %d\n",s);
    temp=fd;
    fd=ld;
    ld=temp;
    printf("after swapping first dig is %d and last dig is %d",fd,ld);
    return 0;
}