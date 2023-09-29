#include<stdio.h>
void display1(int m);
void display2(int *m);
int main()
{
    int i;
    int m[]={56,66,77,89};
    for(i=0;i<=3;i++)
        display1(m[i]);
    for(i=0;i<=3;i++)
        display2(&m[i]);
        return 0;
}
void display1(int m){
    printf("%d  ",m);
}
void display2(int *m){
    printf("%d  ",*m);
}