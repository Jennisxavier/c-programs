#include<stdio.h>
int i=0;
int main()
{
    float arr[6];
    //int arr2[6];
    for(int i=0;i<6;i++)
    {
        printf("enter marks for sub%d\t",i);
        scanf("%f",&arr[i]);
    }
    for(int j=0;j<6;j++)
    {
       float arr2[j]=arr[i]*100/6;
        printf("%f is the percentage/n ",arr2[j]);
    }
}