#include<stdio.h>
#include<stdlib.h>
int main()
{
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
}
