#include <stdio.h>
int main()
{
    char em[20];
    char pw[20];
    int date,a=12;
    printf("enter email");
    scanf("%s",&em);
    printf("enter password");
    scanf("%s",&pw);
    printf("enter date(only two dig)");
    scanf("%d",&date);
    if(date==12){
        printf("email sent");
    }
    else{
        printf("wait");
    }
    return 0;
}