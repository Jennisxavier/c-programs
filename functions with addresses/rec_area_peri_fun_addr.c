#include <stdio.h>
void areaperi(int len,int bre,int *a,int *p);
int main()
{
    int l,b,area,peri;
    printf("enter the length and bbreadth:\t");
    scanf("%d %d",&l,&b);
    areaperi(l,b,&area,&peri);
    printf("\narea=%d \nperimeter=%d",area,peri);
    return 0;
}

void areaperi(int len,int bre,int *a,int *p){
    *a=len*bre;
    *p=2*(len+bre);
}