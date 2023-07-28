#include <stdio.h>
int main()
{
    char input;
    printf("enter an alphabet:\t");
    scanf("%c",&input);
    if (input=='a' || input=='e' || input=='i'|| input=='o'|| input=='u')
        printf("its a vowel\n");
    else
        printf("its a consonant\n");
    
    return 0;

}