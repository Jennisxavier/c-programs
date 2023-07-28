#include<stdio.h>
int main()
{
    int f,s,swap;
    printf("enter the first no:");
    scanf("%d",&f);
    printf("enter the second no:");
    scanf("%d",&s);
    swap=f;
    f=s;
    s=swap;
    printf("the first no is:%d",f);
    printf("the second no is:%d",s);
    return 0;
}

