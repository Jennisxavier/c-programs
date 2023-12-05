#include<stdio.h>
int main()
{
   int n,sum=0,i;
   printf("n:");
   scanf("%d",&n);
   
    if(n<0)
    {break;}
    sum+=n;
   
   printf("sum is %d",sum);
}