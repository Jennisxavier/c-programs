#include <stdio.h>
int primeornot(int n);
int main()
{
    int num;
    FILE *file,*prime,*even,*odd;
    file=fopen("fileeee.txt","r");
    prime=fopen("prime.txt","w");
    even=fopen("even.txt","w");
    odd=fopen("odd.txt","w");
    while(fscanf(file,"%d",&num)!=EOF)
    {
        if(num%2==0)
        {
            fprintf(even,"%d",num);
        }
        else{
            fprintf(odd,"%d",num);
        }
        if(primeornot(num)==1)
        {
            fprintf(prime,"%d",num);
        }
    }
    fclose(file);
    fclose(prime);
    fclose(odd);
    fclose(even);
}
int primeornt(int n)
{
    int i,count=0;
    if(n==1 || n<0)
    {
        return 0;
    }
    else
     {  for(i=2;i<n;i++)
        {
            if(n%i==0)
            count++;
        }
        if(count==0)
        {return 1;}
        else
       {return 0;}
     }
}