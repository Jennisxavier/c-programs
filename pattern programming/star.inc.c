#include<stdio.h>
int main()
{
    int i,j,space,n;
    printf("enter n");
    scanf("%d",&n);
    //char ch='A';
    for(i=1;i<n;i++){
        //for(space=0;space<=n-i;space++)
           //{ printf("  ");}
        //for(j=1;j<=2*i-1;j++)
        for(j=1;j<=i;j++)
            {printf("* ");}
           // printf("\n");}
            //printf("\n");}
         printf("\n");
    }
    for(i=n;i>=1;i--){
      for(j=1;j<=i;j++){
         printf("* ");
      }
      printf("\n");
    }
   return 0;
}