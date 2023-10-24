#include<stdio.h>
int main()
{
    int n=10,i=1;
    while(i<=n)
    {
        if(n%i==0)
        printf("%d ",i);
        i++;
    }
}