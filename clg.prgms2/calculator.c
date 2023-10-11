#include <stdio.h>
int main()
{
    int n1,n2;
    char ch;
    printf("enter 2 nos and operator \n");
    scanf("%d %d %c",&n1,&n2,&ch);
    //printf("enter opertor");
    //scanf("%c",&ch);
    switch(ch)
    {
        case '+':
        printf("%d + %d=%d\n",n1,n2,n1+n2);
        break;
        case '-':
        printf("%d - %d=%d\n",n1,n2,n1-n2);
        break;
        case '*':
        printf("%d * %d=%d\n",n1,n2,n1*n2);
        break;
        case '/':
        printf("%d / %d=%d\n",n1,n2,n1/n2);
        break;
    }
    return 0;
}