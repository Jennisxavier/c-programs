#include <stdio.h>
int main()
{
    int n,i=1;
    printf("enetr a no: ");
    scanf("%d",&n);
    for(;i<=10;i++)
    {
        printf("%d * %d = %d\n",n,i,n*i);
    } 
    return 0;
}