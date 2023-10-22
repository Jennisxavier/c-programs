#include<stdio.h>
int main()
{
    int n,originalN,sum=0,digit,i=1,fac=0; //fact=0(include 0)?
    printf("enter no:");
    scanf("%d",&n);
    originalN=n;
    while(i<n)
    {
        if(n%i==0)
        {fac=i;                      //error always comes in brackets
        sum+=fac;}
        i++;
    }
    if(originalN==sum)
    printf("perfect no");
    else
    printf("not a perfect no");
    return 0;
}