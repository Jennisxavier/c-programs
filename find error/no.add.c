#include <stdio.h>
int main()
{
    int a,b,sum;
    printf("a nd b");
    scanf("%d %d",&a,&b);
    if(a>0 && b>0){
        sum=a+b;
        printf("sum is %d",sum);
    }
    else{
        printf("enter +ve");
    }
    return 0;
}