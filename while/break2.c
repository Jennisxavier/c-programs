#include <stdio.h>
int main()
{  
 int i,no,sum;   
  for(i=1;i<=10;i++){
    printf("enetr a no: ");
    scanf("%d",&no);
    
      if(no<0){
        break;}
    else{  
    sum=no+no;
    printf("sum=%d",sum);
    printf("\ntry another no:");
    scanf("%d",&no);}
  }
 return 0;
}   
