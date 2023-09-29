#include <stdio.h>
void display1(int k);
void display2(int *m);
int main()
{
    int mrks[3];
    printf("\nenter three numbers:");
    scanf("%d",&mrks[3]);
    display1(mrks[3]);
    display2(&mrks[3]);
    return 0;
    }
void display1(int k){
    int i;
    for(i=0;i<=3;i++)
    printf("\nnos:%d %d %d",k);
}
void display2(int *m){
    int i;
    for(i=0;i<=3;i++)
    printf("\nnos:%d %d %d ",*m);
}