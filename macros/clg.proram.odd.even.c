#include<stdio.h>
int main()
{
    int evencount=0,oddcount=0;
    int arr[100],n,arr2[100]={0},arr3[100]={0};
    printf("enter n value:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        printf("enter array elemant %d  ",i+1);
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
           arr2[evencount++]=arr[i];
        }
        else if(arr[i]%2!=0)
        {
            arr3[oddcount++]=arr[i];
        }
    }
    printf("EVEN ARRAY");
        for(int j=0;j<evencount;j++){
          
            printf("  %d ",arr2[j]);
        }
        printf("\nODD ARRAY");
        for(int j=0;j<oddcount;j++){
                printf("  %d ",arr3[j]);
        }
    
    printf("\n");
}