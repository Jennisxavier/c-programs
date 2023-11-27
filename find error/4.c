#include <stdio.h>
int main()
{
    int a=2,b=2,c=0,d=2,m;
    m=a++ && b++ && c++ || d++;
    printf("%d %d %d %d %d",a,b,c,d,m);
    return 0;
}