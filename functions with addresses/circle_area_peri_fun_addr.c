#include <stdio.h>
void areaperimeter(int r,float *a,float *p);
int main()
{
    int r;
    float area,peri;
    printf("enter radius:\t");
    scanf("%d",&r);
    areaperimeter(r,&area,&peri);
    printf("\narea=%.2f and perimeter=%.2f",area,peri);
    return 0;
}

void areaperimeter(int r,float *a,float *p){
   *a=3.14*r*r;
   *p=2*3.14*r;
}
