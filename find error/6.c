#include <stdio.h>
int main()
{
    int a=5,b=0,c=2;
    if(a>b && a>c){
        printf("a is big");
    }
    else{
        if(b>a && b>c)
        printf("b is big");
        else
        printf("c is big");
    }
}