#include<stdio.h>
int count=0;
int countdig(int n);
int main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    countdig(n);
}
int countdig(int n)
{
   if(n>0)
    {
        count++;
        countdig(n/10);
    }
    else
    printf("no of digits is %d",count);
}