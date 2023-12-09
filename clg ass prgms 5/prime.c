#include<stdio.h>
int prime(int i,int n);
int main()
{
    int i=2,n;
    printf("enter no");
    scanf("%d",&n);
    prime(i,n);
}
int prime(int i,int n)
{
    if(i==n)
    printf("prime no");
    else if(n%i==0)
    printf("not prime");
    else 
    prime(i+1,n);
}