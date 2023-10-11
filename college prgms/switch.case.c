#include <stdio.h>
int main()
{
    int a=3,b=4,c=5,d=6,tot=2;
    if(a<b && c>d)
    tot=3;
    else
    tot=4;
    switch(tot){
        case 2:
        printf("hello\n");
        break;
        case 3:
        printf("so long\n");
        break;
        default:
        printf("bye bye beachhhh");
    }
    return 0;
}