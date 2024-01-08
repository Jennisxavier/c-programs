#include<stdio.h> 
int isprime(int n)
{ int count=0; for(int 
i=1;i<=n;i++)
{ if(n%i==0)
count++; 
} 
if(count==2)
return 1;
else
return 0;
 }  
int main()
{
FILE *file=fopen("file.txt","r");
FILE *even=fopen("even.txt","w");
FILE *odd=fopen("odd.txt","w");
FILE *prime=fopen("prime.txt","w");
if (file == NULL || even==NULL || odd == NULL || prime== NULL) { 
printf("Error opening files.\n"); return 1;
}
int num;
while(fscanf(file,"%d",&num)!=EOF)
{ if(num%2==0)
fprintf(even,"%d\n",num);
else
fprintf(odd,"%d\n",num);
if(isprime(num)==1)
fprintf(prime,"%d\n",num);
}
fclose(file); 
fclose(even); 
fclose(odd);
fclose(prime);
}