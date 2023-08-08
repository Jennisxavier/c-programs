#include <stdio.h>
void odd();
int main()
{ odd();
    return 0;
}    
void odd(){
    int no;
    printf("enetr a number");
    scanf("%d",&no);
    if(no%2==0){
        printf("even");
    }
    else{
        printf("odd");
    }

}
