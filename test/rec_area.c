#include <stdio.h>
int main()
{
    int l,b,area,perimeter,r;
    float area2;
    printf("\nenter the length, breadth and radius:\n");
    scanf("%d %d %d",&l,&b,&r);
    area=l*b;
    printf("\narea of the rectangle is %d",area);
    perimeter=2*(l+b);
    printf("\nthe perimeter of the rectangle is %d",perimeter);
    area2=3.14*r*r;
    printf("\narea of the circle is %.2f",area2);
    return 0;
}