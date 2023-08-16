#include <stdio.h>
void swap(int apple,int boy);
int main()
{
    int a=2,b=3;
    swap(a,b);
    printf("\n%d , %d\n",a,b);
    return 0;
}

void swap(int apple,int boy){
    int s;
    s=apple;
    apple=boy;
    boy=s;
    printf("\nthe val of a nd b after swapping is\na=%d and\n b=%d\n",apple,boy);
}