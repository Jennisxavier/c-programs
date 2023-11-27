#include <stdio.h>
float diameter(float r);
float circumcircle(float r);
float areacircle(float r);
#define pi 3.14
int main()
{
    float r;
    printf("enter radius");
    scanf("%f",&r);
    float dia=diameter(r);
    float cir=circumcircle(r);
    float area=areacircle(r);
    printf("diametrt is %.3f\n",dia);
    printf("circumference is %.3f\n",cir);
    printf("area is %.3f\n",area);
}
float diameter(float r){
    float d=r*2;
    return d;
}
float circumcircle(float r){
    float c=2*pi*r;
    return c;
}
float areacircle(float r){
    float a=pi*r*r;
    return a;
}
