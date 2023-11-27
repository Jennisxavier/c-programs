#include <stdio.h>
int n1=0,n2=1,nt=1;
int fact(int num)
{
    if(num>0)
    return num*fact(num-1);

    else
    return 1;
}

int fibo(int num)
{
    //int n1=0,n2=1,nt=1;
    if(num>0)
    {
        n1=n2;
        n2=nt;
        nt=n1+n2;
        printf("%d ",nt);
        fibo(num-1);
    }
}

int main()
{
    int num;
    printf("enter num");
    scanf ("%d",&num);
    printf("fact of %d is %d",num,fact(num));
    printf("\nFibonacci series is\n%d %d %d ",n1,n2,nt);
    fibo(num-3);
}