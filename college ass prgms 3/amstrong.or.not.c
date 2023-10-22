#include<stdio.h>                           ans varala
#include<math.h>                            //ans varala
int main()
{
    int no,originalN,remainder,n=0,result=0;
    printf("enter an integer");
    scanf("%d",&no);
    originalN=no;
    while(originalN!=0){
        originalN=originalN/10;
        ++n;                                        ans varala
    }                                                   ans varala
    originalN=n;
    while(originalN !=0){
        remainder=originalN%10;
        result+=pow(remainder,n);
        originalN=originalN/10;
    }
    if(result==no)
    printf("amstrong no");
    else
    printf("not amstrong no");
    return 0;
}