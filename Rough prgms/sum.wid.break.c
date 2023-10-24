#include<stdio.h>
int main()
{
    int i,no,sum=0;
    for(i=1;i<=5;i++)
    {
        printf("enter a no:");
        scanf("%d",&no);
        if(no<0)
        {
            printf("enter a +ve no\n");
           // break;                                    //remove(//)and try both
            continue;
        }
        //printf("enter a +ve no");
        sum=sum+no;
    }
    printf("sum=%d",sum);
}