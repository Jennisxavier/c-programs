#include<stdio.h>
int main()
{
    int x,y;
    printf("enter x and y:");
    scanf("%d %d",&x,&y);
    x=x+y;
    y=x-y;
    x=x-y;
    printf("x=%d and y=%d",x,y);
    return 0;
}