#include <stdio.h>
int array_max(int arr[],int size);
int array_min(int arr[],int size);
int main()
{
    int n;
    int max,min;
    printf("enter an array size");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    max=array_max(arr,n);
    min=array_min(arr,n);

    printf("maximum is %d\n",max);
    printf("minimum is %d",min);
}
int array_max(int arr[],int size)
{
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    
    return max;
}
int array_min(int arr[],int size)
{
    int min=array_max(arr,size);
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    return min;
}