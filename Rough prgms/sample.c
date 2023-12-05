#include<stdio.h>
int fact(int n);
int main()
{
    int n=3;
    printf("fact is %d",fact(n));
}
int fact(int n)
{
    int i,f=1;
    for(i=1;i<=n;i++)
    f*=i;
    return f;
}