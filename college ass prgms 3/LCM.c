#include <stdio.h>
int main()
{
    int no1,no2,i,lcm,big;
    printf("enter two nos:");
    scanf("%d %d",&no1,&no2);
    if(no1>no2)
        big=no2;
    else
        big=no1;
    while(1)
    {
        if(big%no1==0 && big%no2==0)
        {
            lcm=big;
            break;
        }
       big++; 
    }
    printf("lcm is %d\n",lcm);
    while(no1!=no2)
    {
        if(no1>no2)
        no1=no1-no2;
        else
        no2=no2-no1;
    }
    printf("gcd is %d",no1);
    return 0;
}