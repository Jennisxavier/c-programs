#include<stdio.h>
int main()
{
    int n=456,sum=0,digit;  
    while(n>0){
        digit=n%10;
        sum=sum+digit;
        n=n/10;
       // n++;(instead of n=n+1 we've used n=n/10(n/=10)in previous steps)
    }
    printf("sum is %d",sum);
}