#include <stdio.h>
int main()
{
    char name[40];
    int gen;
    float tf,pf,wai,t1,t2;
    printf("name:");
    scanf("%s",&name);
    printf("gender(f or m)");
    scanf("%d",&gen);
    printf("tution fee");
    scanf("%f",&tf);
    printf("place fee");
    scanf("%f",&pf);
    if(gen==1){
        wai=(tf+pf)*0.1;
        t1=tf+pf-wai;
        printf("tot fee foe f is %f",t1);
    }
    else if(gen==2){
        t2=tf+pf;
        printf("tot fee foe m is %f",t2);
    }
    return 0;
}