// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int n=10,i=1,hrs;
    float otpay;
    while(i<=10)
    {
        printf("enetr the no of hrs");
        scanf("%d",&hrs);
        if(hrs>40)
        {otpay=(hrs-40)*120;}
        else
        {otpay=0;}
    
    printf("hrs=%d\totpay=%f",hrs,otpay);
    i++;
    }
    return 0; 
    
}

    
    
