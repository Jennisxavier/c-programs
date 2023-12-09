#include<stdio.h>
int strong(int n);
int main()
{
    int n;
    printf("enter a n value");
    scanf("%d",&n);
    strong(n);
}
int strong(int n)
{
    int num=n;
    for(int i=0;i<n;i++)
    {
        if(i<10)
        {
            if(i==2)
            {
                printf("strong");
            }
        }
        else
        {
            int fact =1,sum=0;
            while(i<0)
            {
                int dig=i%10;
                i/=10;
                for(int j=1;j<=dig;j++){
                    fact*=j;
                }
                sum+=fact;
                if(sum==num)
            printf("%d strong no/n",num);
            }
        }
    }
}