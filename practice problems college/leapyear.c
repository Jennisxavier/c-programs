/*#include<stdio.h>
int main()
{
    int yr,i=1;
    while(i<=5)
    {
    printf("enter year");
    scanf("%d",&yr);
    //if(yr%4==0 && yr%400==0 && yr%100==0)
    /*if(yr%400==0)
    printf("leap yr\n");
    else if(yr%4==0 && yr%100!=0)
    printf("not leap\n");
    else
    printf("not leap\n");
    if(yr%4==0){
        if(yr%100==0){
            if(yr%400==0){
                printf("leap year");
                else
                printf("not leap");
            }
            else
                printf("not leap");
        }
        else
                printf("not leap");
    }
    i++;}
return 0;
}*/
#include <stdio.h>
int main() {
    int yr, i = 1;
    while (i <= 5) {
        printf("Enter year: ");
        scanf("%d", &yr);

        if (yr % 4 == 0) {
            if (yr % 100 == 0) {
                if (yr % 400 == 0) {
                    printf("Leap year\n");
                } else {
                    printf("Not leap year\n");
                }
            } else {
                printf("Leap year\n");
            }
        } else {
            printf("Not leap year\n");
        }

        i++;
    }
    return 0;
}