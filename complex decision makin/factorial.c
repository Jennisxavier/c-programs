#include <stdio.h>
int main()
{
    int n=4 ,factorial=1,i=1;
    while(i<=n)
    {factorial*=i;
    i++;}
    printf("%d\n",factorial);
    return 0;
}