#include<stdio.h>
int numdigit(int num)
{
    int count=0,n=num,dig;
    while(num>0)
    {
        count++;
        num=num/10;
    }
    printf("the no of digits in %d is %d",n,count);
}
int sumdigit(int num)
{
    int dig,n=num,sum=0;
    while(num>0)
    {
        dig=num%10;
        //num/=10;(put anywhere)
        sum+=dig;
        num/=10;
    }
    printf("\nthe sum of digits in %d id %d",n,sum);
}
int reversedig(int num)
{
    int n=num,rev=0,dig;
    while(num>0)
    {
        dig=num%10;
        rev=rev*10+dig;
        num/=10;
    }
    printf("\n the reverse no is %d is %d",n,rev);
}
int main()
{
    int num;
    printf("enter a number");
    scanf("%d",&num);
    numdigit(num);
    sumdigit(num);
    reversedig(num);
}