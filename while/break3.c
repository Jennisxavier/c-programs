#include <stdio.h>
int main()
{
    int target=4,guess;
    printf("guess a no less than 10 :\t");
    scanf("%d",&guess);

    while(1){
        if(guess==4)
        {printf("congrats");
        break;}
        else if(guess<4)
        {printf("guess a bigger no");
        scanf("%d",&guess);}
        else if(guess>4)
        {printf("guess a smaller no");
        scanf("%d",&guess);}
    }
  return 0;  
    
}