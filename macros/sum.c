#include<stdio.h>
/*#define sum(a,b) (a+b)
int main()
{
    int c,d=2,x=10,y=20;
    c=d*sum(x,y);
    printf("%d",c);
}*/
#define sqr(s) ((s)*(s))
#define prnt(a,b)\
printf("val1=%d\n",a);\
printf("val2=%d\n",b);
int main(void)
{
    int x=2,y=3;
    prnt(sqr(x),y);
}