#include<stdio.h>
#include<stdlib.h>
struct book 
{
    int bno;
    char bname[20];
};
int main()
{
    struct book b={20,"kaviya"};
    FILE *fptr;
    fptr=fopen("file.txt","w");
    if(fptr==NULL)
    {
        printf("file's not opened");
    }
    else
    {
        printf("sucessfull");
    }
    fprintf(fptr,"%d %s",b.bno,b.bname);
    fclose(fptr);
}
