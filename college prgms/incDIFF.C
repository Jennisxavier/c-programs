#include <stdio.h>
int main()
{
    int a=3,b=2,sum=0;
    sum=(++a,b++,b+=a);
    printf("sum=%d",sum);
    //printf("%d",1==3!=5);
}