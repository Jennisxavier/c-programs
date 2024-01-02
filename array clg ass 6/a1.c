#include <stdio.h>
int main()
{
int k=0;
 int temp;
 int a1[100],a2[100],res[100];
 int n;
 printf("enter array size ");
    scanf("%d",&n);
    printf("enter array elements 1 ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a1[i]);
        res[k]=a1[i];
        k++;
    }
    printf("enter array elements 2 ");
     for(int j=0;j<n;j++)
    {
        scanf("%d",&a2[j]);
        res[k]=a2[j];
        k++;
    }
    printf("the resultant array is\n");
    for(int i=0;i<2*n;i++)
    {
        printf("%d ",res[i]);
    }
    for(int i=0;i<2*n;i++){
        for(int j=0;j<2*n;j++){
            if(res[i]<res[j]){
               temp=res[i];
               res[i]=res[j];
               res[j]=temp;
            }
        }
    }
    printf("\n array in descending order is\n");
    for(int i=0;i<2*n;i++){
        printf("%d ",res[i]);

    }

}
