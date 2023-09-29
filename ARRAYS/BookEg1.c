#include <stdio.h>
int main()
{
    int sum=0,i;
    float avg;
    int mrks[5];
    for(i=0;i<=4;i++)
    {
        printf("enter marks:\n");
        scanf("%d",&mrks[i]);
    }
    for(i=0;i<=4;i++)
    {
        sum=sum+mrks[i];
    }
    avg=sum/5;
    printf("avg is %f",avg);
    return 0;
}