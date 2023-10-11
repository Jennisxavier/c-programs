#include <stdio.h>
int main()
{
    int u;
    float amt,eb;
    printf("enter units");
    scanf("%d",&u);
    if(u<=50)
    {
        amt=u*0.50;
    }
    else if(u>50 && u<=100)
    {
        amt=u*0.75;
    }
    else if(u>100 && u<=200)
    {
        amt=u*1.20;
    }
    else
    {
        amt=u*1.50;
    }
    eb=amt+0.2*amt;
    printf("the amt for electricity bill is %f",eb);
    return 0;
}