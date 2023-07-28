#include <stdio.h>
int main()
{
    int a=10,b=100;
    float c=10.5,d=100.5;

    printf("++a=%d\n",a+=b);
    printf("--b=%d\n",a-=b);
    printf("++c=%f\n",a*=b);
    printf("--d=%f\n",a/=b);
    return 0;
    
}