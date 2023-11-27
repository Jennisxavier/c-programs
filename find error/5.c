#include <stdio.h>
int main()
{
    int n;
    printf("enter n:");
    scanf("%d",&n);
    if(n<=2){
        switch(n){
            case 1:
            printf("one");
            break;
            case 2:
            printf("two");
            break;
            }
    }
        else
        printf("greater than 2");
        return 0;
}