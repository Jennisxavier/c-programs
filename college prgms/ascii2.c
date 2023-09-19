#include <stdio.h>
int main()
//this is wrong
{
    int i;
    printf("enter a digit or character:");
    scanf("%d",&i);
    printf("ascii val of %d is %d",i,&i);
    return 0;
}