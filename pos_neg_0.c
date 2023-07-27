// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int pos,neg,zero,num;
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
    printf("%d +ve nos",pos);
    printf("%d -ve nos",neg);
    printf("%d zeros",zero);
    return 0;
}