#include <stdio.h>
int main()
{
int no;
printf("enetr a no");
scanf("%d",&no);
if (no%2==0)
    printf("%d is even",no);
else
    printf("%d is odd",no);
return 0;
}