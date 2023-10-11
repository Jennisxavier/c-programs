#include <stdio.h>
int main()
{
    int amt,no500,no100,no50,no20,no10,no5;
    printf("enter amt:\t");
    scanf("%d",amt);
    if(amt>=500)
        {
            no500=amt/500;
        amt=amt-(no500*500);
        }
    if(amt>=100)
        {
            no100=amt/100;
            amt=amt-(no100*100);
        }
    if(amt>=50)
        {
            no50=amt/50;
            amt=amt-(no50*50);
        }
        "         "
        "         "
        "         "
        "         "
     if(amt>=5)
        {
            no50=amt/5;
            amt=amt-(no5*5);
        }   
    printf("Total no of notes=\n");
    printf("500 notes=%d",no500);
        "         "
        "         "
        "         "
        "         "
    printf("5 notes=%d",no5);
    return 0;
}