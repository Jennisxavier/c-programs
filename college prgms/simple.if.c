#include <stdio.h>
int main()
{
    int x,y;
    printf("ent x & y");
    scanf("%d %d",&x,&y);
    if(x!=0 && y!=0)
    {printf("%d +%d = %d ",x,y,x+y);}
    return 0;
}