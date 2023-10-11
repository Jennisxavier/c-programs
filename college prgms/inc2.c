#include <stdio.h>
int main()
{
    int a=3,b=2,sum=0;
    printf("%d %d %d\n",a++,++b,sum--);
    printf("%d %d %d\n",a,b++,sum);
    sum=b;
    printf("%d",sum);
    return 0;
}