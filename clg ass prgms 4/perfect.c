#include<stdio.h>
int perfect(int a,int b);
int main()
{
    int a,b;
    printf("enter start and end\n");
    scanf("%d %d",&a,&b);                       (WRONG)
    perfect(a,b);
}
int perfect(int a,int b)
{
    int sum=0,num=b;
    for(int i=a;i<b;i++){                       (WRONG)
        if(b%i==0)
        {
            sum+=i;
        }
    }
    if(sum==num)
    {
        printf("perfect no is%d",num);
    }
}