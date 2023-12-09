#include<stdio.h>
int pattern(int n);
int main()
{
    int n;
    printf("enter no");
    scanf("%d",&n);
    pattern(n);
}
int pattern(int n)
{
    int i,space=1,j;
    for(i=1;i<=n;i++)
    {
        for(space=1;space<=n-i;space++)
        {printf("  ");}
        for(j=i;j<=i;j++)
        {
            printf("* ");
            printf("\n");
        }
    }
}