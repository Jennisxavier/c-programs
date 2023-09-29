#include<stdio.h>
int main()
{
    int arr[]={10,20,30,56,67};
    int i=4,*j,*k,*x,*y;
    j=&i;
    j=j+9;
    k=&i;
    k=k-3;
    x=&arr[1];
    y=&arr[2];
    printf("%d\n",y-x);
    j=&arr[4];
    k=(arr+4);
    if(j==k){
        printf("pointers are in same location \n");
    }
    else{
        printf("pointers are in diff location");
        return 0;
    }
    
}
