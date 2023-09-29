#include <stdio.h>
int main()
{
    int a,size;
    printf("1.int\n2.char\n3.float\n4.double\n");
    printf("enter datatype:");
    scanf("%d",&a);
    size=(a==1)?sizeof(int):(a==2)?sizeof(char):(a==3)?sizeof(float):(a==4)?sizeof(double):
    printf("the size in bytes is %d",size);
    return 0;
}

#include<stdio.h> 
int main()
{
    int a,size;
    printf("1.int\n");
    printf("2.char\n");
    printf("3.float\n");
    printf("4.double\n");
    printf("Enter your choice : ");
    scanf("%d",&a); 
    size=(a==1)?sizeof(int):(a==2)?sizeof(char):(a==3)?sizeof(float):(a==4)?sizeof(double):
    //printf("Choose numbers only from given choices"); 
    printf("The size in bytes is %d",size);
    return 0; 
}