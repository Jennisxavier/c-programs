#include<stdio.h>
int factnum(int num)
{
    if(num==1)
    return 1;

    else
    return num*factnum(num-1);
}
int main()
{
    int num,i;
    float sum=0.0;
    printf("enter the value");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        sum+=factnum(num)/num;
    }
    printf("sum is %f",sum);
}