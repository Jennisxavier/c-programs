#include <stdio.h>
#include <math.h>
int main()
{   
    int x,y,z;
    double ans;
    printf("enter x y and z:");
    scanf("%d %d %d",&x,&y,&z);
    ans=log(sqrt(pow(x,3)*y/pow(z,2)));
    printf("the ans is:%lf",ans);
    return 0;
}