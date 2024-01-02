#include <stdio.h>
#include <string.h>

struct Address {
    int str_no;
    char str_name[20];
    int zip;
};

struct DOJ {
    int day;
    int month;
    int year;
};

struct Employee {
    int ID;
    char name[20];
    struct DOJ doj;
    struct Address add;
};

struct Industry {
    char name[20];
    int number;
    struct Employee emp[10];  // Assuming a maximum of 10 employees for each industry
};

int main() {
    int n;
    printf("Enter no. of industries:");
    scanf("%d", &n);
    struct Industry industry[n];

    for (int i = 0; i < n; i++) {
        printf("Enter Industry name:");
        scanf("%s", industry[i].name);
        printf("Enter Industry Contact Number:");
        scanf("%d", &industry[i].number);

        int no_emp;
        printf("Enter no. of Employees:");
        scanf("%d", &no_emp);

        for (int j = 0; j < no_emp; j++) {
            printf("Enter employee name:");
            scanf("%s", industry[i].emp[j].name);
            printf("Enter employee ID:");
            scanf("%d", &industry[i].emp[j].ID);
            printf("Enter Employee street no.:");
            scanf("%d", &industry[i].emp[j].add.str_no);
            printf("Enter Employee street name:");
            scanf("%s", industry[i].emp[j].add.str_name);
            printf("Enter Employee zip:");
            scanf("%d", &industry[i].emp[j].add.zip);
            printf("Enter Date of Joining (Day/Month/Year):");
            scanf("%d %d %d", &industry[i].emp[j].doj.day, &industry[i].emp[j].doj.month, &industry[i].emp[j].doj.year);
        }
    }

    return 0;
}