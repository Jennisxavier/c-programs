#include <stdio.h>
shift(int *a,int *b,int *c);
int main()
{
    int x=5,y=8,z=10;
    shift(&x,&y,&z);
    printf("x=%d,y=%d,z=%d",x,y,z);
    return 0;
}

shift(int *a,int *b,int *c){
    int swap;
    swap=*a;
    *a=*c;
    *c=*b;
    *b=swap;
}