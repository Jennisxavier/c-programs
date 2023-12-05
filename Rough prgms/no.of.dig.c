#include<stdio.h>
int main()
{
   int num,n=40003,sum=0,dig;
   num=n;
   while(n>0){
    dig=n%10;
    n/=10;
    sum+=dig;
   }
   
   printf("no of dig in %d is %d",num,sum);
}