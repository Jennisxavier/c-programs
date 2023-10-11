#include<stdio.h>
void display(int q[][4],int row,int col);
int main()
{
    int a[3][4]={
            1,2,3,4,
            4,6,7,8,
            9,0,8,9,
        };
    display(a,3,4);
    return 0;
}
void display(int q[][4],int row,int col)
{
    int i,j;
    for(i=0;i<=row-1;i++)
    {
        for(j=0;j<=col-1;j++)
        printf("%d ",q[i][j]);
    printf("\n");
    }
    printf("\n");
}