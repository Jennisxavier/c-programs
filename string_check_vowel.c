/*#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    gets(str);

    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u')
            strcat(str, "es");
        else
            strcat(str, "a");
    }

    printf("Modified: %s\n", str);

    return 0;
}*/
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i;

    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);

    // Removing the newline character if present
    str[strcspn(str, "\n")] = '\0';

    int originalLength = strlen(str);

    for (i = 0; i < originalLength; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'o' || str[i] == 'i' || str[i] == 'u') {
            strcat(str, "es");
            i++;  // Skip the next character, as it has been modified
            originalLength++;  // Adjust the original length after modification
        } else {
            strcat(str, "a");
        }
    }

    printf("Modified: %s\n", str);

    return 0;
}
DDDDOOOOWWWWWNNNNNNNNNNN

#include <stdio.h>
#include <stdlib.h>

// Define the structure for employee details
struct Employee {
    int empId;
    char name[50];
    float basicPay;
    float houseRentAllowance;
    float dearnessAllowance;
    float providentFund;
    float salary; // Additional field for storing the calculated salary
};

// Function to calculate the salary of an employee
void calculateSalary(struct Employee *employee) {
    // Salary calculation formula (example): Basic Pay + HRA + DA - PF
    employee->salary = employee->basicPay + employee->houseRentAllowance +
                       employee->dearnessAllowance - employee->providentFund;
}

int main() {
    int n;

    // Get the number of employees from the user
    printf("Enter the number of employees: ");
    scanf("%d", &n);

    // Dynamically allocate memory for an array of Employee structures
    struct Employee *employeeArray = (struct Employee *)malloc(n * sizeof(struct Employee));

    // Check if memory allocation was successful
    if (employeeArray == NULL) {
        printf("Memory allocation failed.\n");
        return 1; // Exit with an error code
    }


    #include <stdioh>
#include <stdlib.h>

int main() {
  FILE *file;
  char ch;

  // Open the file in read mode
  file = fopen("example.txt", "r");

  // Check if file exists
  if (file == NULL) {
    printf("Error opening file\n");
    exit(1);
  }

  // Read the contents of the file and display it to the user
  while ((ch = fgetc(file)) != EOF) {
    printf("%c", ch);
  }

  // Close the file
  fclose(file);

  return 0;
}
