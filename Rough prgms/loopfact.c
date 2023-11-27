#include <stdio.h>
int main()
{
    int n,i,j,fact=1;
    float div,sum=0.0;
    printf("enter n");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        fact*=i;
        //j=fact;
        //div=i/j;
        sum+=i/fact;
    }
    printf("the ans is %f",sum);
}