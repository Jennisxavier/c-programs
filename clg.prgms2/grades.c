#include <stdio.h>
int main()
{
    int b,c,m,p,csc,tot;
    float perc;
    printf("enter the marks of phy chem mat bio csc\n");
    scanf("%d %d %d %d %d",&p,&c,&m,&b,&csc);
    tot=b+c+m+p+csc;
    perc=(tot/500.0)*100;
    if(perc >=90 ) 
    printf("gradeA");
    else if(perc>=80 && perc <90 )
    printf("gradeB");
    else if(perc>=70 && perc <80 )
    printf("gradeC");
    else if(perc>=60 && perc <70)
    printf("gradeD");
    else if(perc>=40 && perc <60 )
    printf("gradeE");
    else
    printf("gradeF");
return 0;
}