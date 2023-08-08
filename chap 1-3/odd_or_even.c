#include <stdio.h>
int main(){
  int no;
  while(1)  
  {printf("ent a no:\n");
        scanf("%d",&no);

        if(no%2==0){
            printf("even\n");
        }
        else{
            printf("odd\n");
        }
  }
  return 0;
}  