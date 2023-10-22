#include<stdio.h>
void words(int rev);
int main()
{
    int dig,rev,n;
    printf("enter no:");
    scanf("%d",&n);
    while(n>0)
    {
        dig=n%10;
        rev=rev*10+dig;
        words(dig);
        n=n/10;
    }
    return 0;
}

void words(int rev){
    switch(rev)
        {case 1:
        printf("one ");
        break;
        case 2:
        printf("two ");
        break;
        case 3:
        printf("three ");
        break;
        case 4:
        printf("four ");
        break;
        case 5:
        printf("five ");
        break;
        case 6:
        printf("six ");
        break;
        case 7:
        printf("seven ");
        break;
        case 8:
        printf("eight ");
        break;
        case 9:
        printf ("nine ");
        break;
        case 0:
        printf("zero ");
        break;
        }
   }
    