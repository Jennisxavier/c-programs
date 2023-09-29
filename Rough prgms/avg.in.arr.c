#include <stdio.h>
int main()
{
    int avg,i,sum=0;
    int marks[5];
    for(i=0;i<5;i++)
    {
        printf("enter marks\n");
        scanf("%d",&marks[i]);
    }
    for(i=0;i<5;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/5;
    printf("avg is %d",avg);
    return 0;
}