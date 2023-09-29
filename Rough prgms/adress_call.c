#include <stdio.h>
void areaperi(int r,int *a,int *p);
int main()
{
    int a,p,r;
    printf("enter radius:");
    scanf("%d",&r);
    areaperi(r,&a,&p);
    printf("the area n perimeter are %d n %d",a,p);
    return 0;
}

void areaperi(int r,int *a,int *p){
    *a=3.14*r*r;
    *p=2*3.14*r;
}