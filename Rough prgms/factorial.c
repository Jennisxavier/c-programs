#include <stdio.h>
int main()
{
    int n,fact=1,i;
    printf("no:");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
        }
    printf("factorial is %d",fact);
}