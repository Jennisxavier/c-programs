#include <stdio.h>
void swap(int *apple,int *boy);
int main()
{
    int a=2,b=3;
    swap(&a,&b);
    printf("%d , %d",a,b);
    return 0;
}

void swap(int *apple,int *boy){
    int s;
    s=*apple;
    *apple=*boy;
    *boy=s;
    printf("aftr  swapping a=%d and b=%d\n",*apple,*boy);
}