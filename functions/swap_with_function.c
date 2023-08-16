#include <stdio.h>
void swap(int f,int s);
int main()
{
  int f,s;
  printf("enter the first no:");
scanf("%d",&f);
printf("enter the second no:");
scanf("%d",&s);
  swap(f,s);

return 0;
}
void swap(int f,int s){
 int temp;   
temp=f;
f=s;
s=temp;
printf("first no: %d",f);
printf("second no: %d",s);

}
