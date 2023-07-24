#include <stdio.h>
int main()
{
    int marks;
    printf("enter marks");
    scanf("%d",&marks);
    if (80 < marks <= 100)
    {printf("\ngrade is A");}
    if (50 < marks <= 80)
    {printf("\ngrade is B");}
    else
    {printf("grade is C");}
    return 0;
}