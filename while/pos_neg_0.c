// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int pos,neg,zero,num;
    pos=neg=zero=0;
    char ans='y';
    while(ans=='y')
    {
        printf("\nenetr a no:");
        scanf("%d",&num);
        if(num==0)
        zero++;
        if(num>0)
        pos++;
        if(num<0)
        neg++;
        fflush(stdin);
        printf("\nwanna continue?");
        scanf("%c",&ans);
    }
    printf("%d +ve nos \n",pos);
    printf("%d -ve nos \n",neg);
    printf("%d zeros \n",zero);
    return 0;
}