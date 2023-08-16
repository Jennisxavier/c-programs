#include <stdio.h>
void odd();
int main()
{
    int no;
    odd();
    scanf("%d",&no);
    return 0;
}

void odd(){
    
   //printf("enetr a number");
    if(no%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }

}
