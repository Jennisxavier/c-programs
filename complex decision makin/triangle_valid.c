#include <stdio.h>
int main()
{
    int a, b, c, largest, sum;
    printf("enter the 3 sides:");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b)
    {
        if (a > c)
        {
            largest = a;
            sum = b + c;
        }
        else
        {
            largest = c;
            sum = a + b;
        }
    }
    else
    {
        if (b > c)
        {
            largest = b;
            sum = a + c;
        }

        else
        {
            largest = c;
            sum = a + b;
        }
    }

    if (sum > largest)
    {
        printf("trisngle is valid");
    }
    else
    {
        printf("triangle is not valid");
    }

    return 0;
}