#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enetr the sides\t");
    scanf("%d %d %d",&a,&b,&c);
    if(a==b && b==c)
    printf("equilatral");
    else if(a==b || a==c || b==c)
    printf("isosceles");
    else
    printf("scalne");
    return 0;
}