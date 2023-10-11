#include <stdio.h>
int main()
    {
        int m,p,c,tot1,tot2;
        tot1=m+p+c;
        tot2=m+p;
        printf("enter marks in phy chem and maths");
        scanf("%d %d %d",&m,&p,&c);
        if(m>=65 && p>=55 && c>=50)
        {
            if(tot1>=190 || tot2>=140)
            printf("eligible");
            else
            printf("not eligible");
        }
        else
        printf("not eligible");
        return 0;
    }