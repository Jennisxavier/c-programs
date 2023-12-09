#include<stdio.h>
int strongnum(int i);
int factnum(int dig);
int main()
{
    int start,end;
    printf("start val\n");
    scanf("%d",&start);
    printf("end val\n");
    scanf("%d",&end);
    for(int i=start;i<=end;i++)
    {
        if(strongnum(i))
        {
            printf("%d\n",i);
        }
    }
}
int strongnum(int i)
{
    int sum=0;
    int num=i;
    while(i>0){
        int dig=i%10;
        sum+=factnum(dig);
        i/=10;
    }
    if(num==sum)
    return num;

    //else
    return 0;
}
int factnum(int dig)
{
    int fact=1,j;
    for(j=1;j<=dig;j++)
    {
        fact*=j;
    }
    return fact;
}