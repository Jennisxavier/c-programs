#include<stdio.h>
int i=1,gcd;
int calgcd(int a,int b);
int main()
{
    int a,b;
    printf("enter 2 no");
    scanf("%d %d",&a,&b);
    calgcd(a,b);
    printf("gcd of %d and %d is %d",a,b,i);
}
int calgcd(int a,int b)
{
    if(i<=a)
    {
        if(a%i==0 && b%i==0)
        {
           // gcd=i;
            i++;
            calgcd(a,b);
        }
    }
    else
        return i;
}