#include <stdio.h>
void conv(float s1,float s2,float s3,float *avg,float *perc);
int main()
{
    float s1,s2,s3,avg,perc;
    printf("enter the marks in 3 subjects:\t");
    scanf("%f %f %f",&s1,&s2,&s3);
    conv(s1,s2,s3,&avg,&perc);
    printf("the avg is %f:\n the percent is:%f",avg,perc);
    return 0;
}
void conv(float s1,float s2,float s3,float *avg,float *perc){
    *avg=(s1+s2+s3)/3;
    *perc=(s1+s2+s3)*0.003*100;
}