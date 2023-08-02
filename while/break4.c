#include <stdio.h>
int main()
{
    int i,j;
    printf("enter i and j-");
    scanf("%d %d",&i,&j);
    for(i=1;i<=3;i++){
        for(j=1;j<=3;j++){
      
        printf("%d  %d\n",i,j);
      

           if(i==2 & j==2)
            {
              printf("loop ends\n");
              break;
            }
        }
      }
  return 0;
}