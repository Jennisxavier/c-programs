#include <stdio.h>
int main()
{
    int t;
    printf("enter temprature");
    scanf("%d",&t);
    if(t<0)
    printf("freezing point");
    else if(t>0 && t<10)
    printf("very cold weather");
    else if(t>10 && t<20)
    printf("cold weather");
    else if(t>20 && t<30)
    printf("normal in temprature");
    else if(t>30 && t<40)
    printf("hot weather");
    else
    printf("its very hot");
    return 0; 
}