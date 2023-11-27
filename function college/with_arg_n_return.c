#include <stdio.h>
float area(int a);
int main()
{
    int a;
    printf("enter radius");
    scanf("%d",&a);
    float ans=area(a);          //whereever u use float in call function use it in main function also
    printf("area=%f",ans);
}
float area(int a){
    float area;
    area=2*3.14*a;
    return area;
}