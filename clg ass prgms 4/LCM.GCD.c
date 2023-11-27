#include<stdio.h>
int gcd(int a,int b);
int lcm(int a,int b);
int main()
{
    int a,b,lcm1,gcd1;
    printf("enter 2 nos");
    scanf("%d %d",&a,&b);
    lcm1=lcm(a,b);
    printf("the lcm of %d nd %d is %d",a,b,lcm1);
    gcd1=gcd(a,b);
    printf("\nthe gcd of %d nd %d is %d",a,b,gcd1);
}
int gcd(int a,int b)
{
    int i,gcd;
    {for(i=1;i<=a;i++)
    {
        if(a%i==0 && b%i==0)
        gcd=i;
    }}
    return gcd;
}
int lcm(int a,int b)
{
    int lcm,gcdvalue;
    gcdvalue=gcd(a,b);
    lcm=(a*b)/gcdvalue;
    return lcm;
}
