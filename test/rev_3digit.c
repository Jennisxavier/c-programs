#include <stdio.h>
int main()
{
    int n,revnum=0,a;
    printf("enter a three digit number:\t");
    scanf("%d",&n);
    a=n%10;
    n=n/10;
    revnum=revnum+a*100;
    a=n%10;
    n=n/10;
    revnum=revnum+a*10;
    a=n%10;
    n=n/10;
    revnum=revnum+a*1;
    printf("\nthe reversed number is : %d",revnum );
    return 0;
}