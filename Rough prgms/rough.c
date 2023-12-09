#include<stdio.h>
int main()
{
    int a=5,b=10,c;
    int *p=&a,*q=&b;
    c=p-q;
    printf("%d %d\n",p,q);
    printf("%d %d\n",&p,&q);
    printf("%d",c);
    return 0;
}