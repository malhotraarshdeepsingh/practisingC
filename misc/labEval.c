#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Enum to represent employee type
typedef enum {
    HOURLY,
    SALARIED
} EmployeeType;

// Structure to store employee details
typedef struct {
    char name[50];
    int id;
    EmployeeType type;
    double hourlyWage;
    int weeklyHours;
    double weeklySalary;
} Employee;

// Function to calculate salary
double calculateSalary(Employee *emp) {
    if (emp->type == HOURLY) {
        return emp->hourlyWage * emp->weeklyHours;
    } else if (emp->type == SALARIED) {
        return emp->weeklySalary;
    }
    return 0;
}

int main() {
    int numEmployees;
    printf("Enter the number of employees: ");
    scanf("%d", &numEmployees);

    // Dynamic memory allocation for employees
    Employee *employees = (Employee *)malloc(numEmployees * sizeof(Employee));
    if (employees == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Input employee details
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEnter details for employee %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", employees[i].name);
        printf("ID: ");
        scanf("%d", &employees[i].id);

        int typeInput;
        printf("Type (0 for Hourly, 1 for Salaried): ");
        scanf("%d", &typeInput);

        if (typeInput == 0) {
            employees[i].type = HOURLY;
            printf("Enter hourly wage: ");
            scanf("%lf", &employees[i].hourlyWage);
            printf("Enter weekly hours worked: ");
            scanf("%d", &employees[i].weeklyHours);
        } else if (typeInput == 1) {
            employees[i].type = SALARIED;
            printf("Enter weekly salary: ");
            scanf("%lf", &employees[i].weeklySalary);
        } else {
            printf("Invalid type entered! Please re-enter details.\n");
            i--;
        }
    }

    // Print employee details and calculate salary
    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Type: %s\n", (employees[i].type == HOURLY) ? "Hourly" : "Salaried");

        if (employees[i].type == HOURLY) {
            printf("Hourly Wage: %.2lf\n", employees[i].hourlyWage);
            printf("Weekly Hours: %d\n", employees[i].weeklyHours);
        } else if (employees[i].type == SALARIED) {
            printf("Weekly Salary: %.2lf\n", employees[i].weeklySalary);
        }

        double salary = calculateSalary(&employees[i]);
        printf("Calculated Salary: %.2lf\n", salary);
    }

    free(employees);

    return 0;
}