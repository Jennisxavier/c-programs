#include <stdio.h>
#include <math.h>
int main()
{
    int i,x;
    float ans=0;
    printf("enetr x\t");
    scanf("%d",&x);
    for(i=1;i<=7;i++){
        if(i==1){
            ans=ans+pow((x-1.0)/x,i);
        }
        else{
            ans=ans+(1.0/2)*pow((x-1.0/x),2);
        } 
    }
    printf("log of %d is %f",x,ans);
    return 0;
}