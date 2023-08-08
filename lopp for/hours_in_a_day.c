#include <stdio.h>
int main()
{
    int i;
    for(i=0;i<24;i++){
        if(i==0){
            printf("0.0 midnight\n");
            continue;
        }
        if(i==12){
            printf("12 noon\n");
        }
        if(i<12){
            printf("%d AM\n",i);
        }
        if(i>12){
            printf("%d PM\n",i%12);
        }
    }
    return 0;
}