
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int choice,no;
    
    while(1){
        printf("1.factorial \n");
        printf("2.prime no \n");
        printf("3.odd/even \n");
        printf("4.exit \n");

        printf("select one from the above:\t");
        scanf("%d",&choice);

        switch(choice)
        {
        case 1:
        printf("ent a no:\n");
        scanf("%d",&no);

        int fact=1,j;
        for(j=1;j<=no;j++){
            fact*=j;
            printf("fact of the no is %d",fact);
            break;
        }

        case 2:
        printf("ent a no:\n");
        scanf("%d",&no);

        int i,r,flag=0;
        for(i=2;i<no;i++){
            r=no%i;
            if(r==0){
                flag++;
                if(flag==0){
                    printf("prime");
                }
                else{
                    printf("not prime");
                }
            }
            break;
        }

        case 3:
        printf("ent a no:\n");
        scanf("%d",&no);

        if(no%2==0){
            printf("even");
        }
        else{
            printf("odd");
        }
        break;

        case 4:
        exit(0);}
    }

    return 0;

}