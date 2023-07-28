#include <stdio.h>
int main()
{
int f,s,temp;    
printf("enter the first no:");
scanf("%d",&f);
printf("enter the second no:");
scanf("%d",&s);
temp=f;
f=s;
s=temp;
printf("first no: %d",f);
printf("second no: %d",s);
return 0;
}
