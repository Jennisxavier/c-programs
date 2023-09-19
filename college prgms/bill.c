#include <stdio.h>
int main()
{
    float pen,pencil,tot1,tot2,tot;
    int qty1,qty2;
    printf("enter pen price:");
    scanf("%f",&pen);
    printf("enter pencil price:");
    scanf("%f",&pencil);
    printf("enter the qty of pen:");
    scanf("%d",&qty1);
    printf("enter the qty of pencil:");
    scanf("%d",&qty2);
    tot1=pen*qty1;
    tot2=pencil*qty2;
    tot=tot1+tot2;
    printf("list of items:\nitem name\t price\npen\t\tRs.%f\npencil\t\tRs.%f\n\nTOTAL BILL = %f",tot1,tot2,tot);
    return 0;
}