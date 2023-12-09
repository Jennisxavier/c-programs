#include<stdio.h>
int bin(int n);
int r,sum=0,i=1;
int main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    bin(n);
}
int bin(int n)
{
    if(n>0)
    {
        r=n%2;
        sum+=r*i;
        i*=10;
        bin(n/2);
    }
    else
    printf("binary no is %d",sum);
}