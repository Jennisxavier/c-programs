#include <stdio.h>
#include <math.h>
int main()
{
    int i,n;
    float p,q,r,a;
    printf("enter p,q,n and r\t");
    scanf("%f %f %d %f",&p,&q,&n,&r);

    for(i=1;i<=10;i++){
        a=p*pow(1+r/q,(n*q));
        printf("amt is:%f\n",a);
    }
  return 0;  
}