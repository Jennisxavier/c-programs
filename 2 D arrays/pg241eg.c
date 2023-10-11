#include <stdio.h>
int main()
{
    int s[4][2]={
            {123,56},{456,90},{789,89},{788,90}
        };
int i;
for(i=0;i<=3;i++)
printf("address of %dth 1D array is %u\n",i,s[i]);
return 0;
}