#include <stdio.h>
void change(int kg,int *gms,int *tons,int *pounds);
int main()
{
    int kg,gms,tons,pounds;
    printf("enetr the weight in kgs:\t");
    scanf("%d",&kg);
    change(kg,&gms,&tons,&pounds);
    printf("\ngrams=%dgms\n tons=%dtons\n pounds=%dpounds\n",gms,tons,pounds);
    return 0;
}

void change(int kg,int *gms,int *tons,int *pounds){
    *gms=kg*1000;
    *tons=kg*0.001;
    *pounds=kg*2.204;
}