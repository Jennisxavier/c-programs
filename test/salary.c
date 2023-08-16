#include <stdio.h>
int main()
{
    while(1)
    {int sal;
    printf("\nenter the salary:\t");
    scanf("%d",&sal);
    if(sal<50000){
        printf("\njunior developer");
    }
    if((sal>50000) && (sal<80000)){
        printf("\nsenior developer");
    }
    if(sal>80000){
        printf("\n lead developer");
    }
    }
    return 0;
}