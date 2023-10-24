#include<stdio.h>
int main()
{
    int i=0;
    for(i=0;i<10;i++)
    {
        if(i!=4)
        break;
        printf("%d\n",i);
    }
    printf("end");
}