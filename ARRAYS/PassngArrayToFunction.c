#include <stdio.h>
void display1(int n,int *m);
void display2(int m[],int n);
int main()
{
    int num[]={24,34,12,44,56,77};
    int i;
    display1(6,&num[i]);
    display2(num[i],6);
    return 0;
}
void display1(int n,int *m)
{
    int i;
    for(i=0;i<=n-1;i++)
    {
        printf("ele=%d\n",*m);
        m++;
    }
}
void display2(int m[],int n)
{
    int i;
    for(i=0;i<=n-1;i++)
    printf("ele=%d\n",m[i]); 
}
