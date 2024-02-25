/*#include <stdio.h>

int main() {
    char str[] = "info tech#";
    int i,count=0;
    for(i=0;str[i]!='\0';i++)
    {
        count++;
    }
    printf("Length of the string: %d\n", count);

    return 0;
}*/

#include<stdio.h>
int main() {
    char str[100];

    
    printf("Enter a str: ");
    scanf("%[^\n]s", str);

    printf("Original str: %s\n", str);
    for(int i=0;str[i]!='\0';i++)
    {
        if(str[i] >= 'a' && str[i] <= 'y')
        {
            str[i]=str[i]+1;
        }
    }
    
    printf("Encrypted str: %s\n", str);

    return 0;
}
