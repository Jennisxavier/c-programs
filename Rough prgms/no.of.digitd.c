#include<stdio.h>
int main()
{
    int n=456,i=0;                                    // n=456/10=45;
    while(n>0){                                       //  i=0+1=1;
        n=n/10;                                       //  n=45/10=4;
        i=i+1;                                        //  i=1+1=2;
    }                                                 //  n=4/10=0;
    printf("no of digits=%d",i);                      //  i=2+1=3
return 0;
}