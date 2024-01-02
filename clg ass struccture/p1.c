#include<stdio.h>
struct employee{
    char name[100];
    int id;
    int salary;    
}
int main()
{
    int n,i;
    printf("enter the no of employees ");
    scanf("%d",&n);
    struct employee emp[n];
    for(i=0;i<n;i++)
    {
        printf("enter employee id ");
        scanf("%d",&emp[i].id);
        printf("\nenter name ");
        sacnf("[^/%s]",&emp[i].name);
        printf("\nenter salary ");
        sacnf("%d",&emp[i].salary);
    }
    struct employee maxsal=emp_maxsal(emp,n);
    printf("employee with the highest salary \n");
    emp_maxsal_info(maxsal);

    return 0;
}
struct emloyee emp_maxsal(struct employee emp[],int n)
{
    struct emloyee maxsalary=emp[0];
    for(int i=0;i<n;i++)
    {
        if(emp[i].salary>maxsalary.salary)
        {
            maxsalary=emp[i];
        }
        return maxsalary;
    }
}

//int emp_maxsal_info();