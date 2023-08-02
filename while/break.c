#include <stdio.h>
int main()
{
    int i;
    printf("ent a no:");
    scanf("%d",&i);
    for(i=0;i<=5;i++)
    {
        if(i==4)
        break;
    }
   printf("out of loop");
   return 0; 
}
