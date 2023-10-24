#include <stdio.h>
int main()
{
    int i=8,j=5,k=0;
    k=(j>5)?(i<5):i-j?j-i:k-j;
    i-=(k)?(i):(j)?(i):(k);
    printf("%d %d",k,i);
}