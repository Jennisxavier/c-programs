#include <stdio.h>
int main()
{
    int a;
    float b;
    double c;
    char d;
    printf("the size of int=%dbytes\n",sizeof(a));
    printf("the size of float=%zubytes\n",sizeof(b));
    printf("the size of double=%zubytes\n",sizeof(c));
    printf("the size of char=%zubytes\n",sizeof(d));
    return 0;
}