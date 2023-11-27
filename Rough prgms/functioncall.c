#include <stdio.h>
int odd_even(int );
int main()
{
    int a;
    printf("enter a no");
    scanf("%d",&a);
    odd_even(a);
}
int odd_even(int a){
    //int ans,a;
    if(a%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }
    //return ans;
}