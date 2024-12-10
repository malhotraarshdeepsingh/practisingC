#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure to store employee details
typedef struct {
    char name[50];
    int id;
    char type[10]; // "Hourly" or "Salaried"
    double hourlyWage;
    int weeklyHours;
    double weeklySalary;
} Employee;

// Function to calculate salary
double calculateSalary(Employee *emp) {
    if (strcmp(emp->type, "Hourly") == 0) {
        return emp->hourlyWage * emp->weeklyHours;
    } else if (strcmp(emp->type, "Salaried") == 0) {
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
        printf("Type (Hourly/Salaried): ");
        scanf("%s", employees[i].type);

        if (strcmp(employees[i].type, "Hourly") == 0) {
            printf("Enter hourly wage: ");
            scanf("%lf", &employees[i].hourlyWage);
            printf("Enter weekly hours worked: ");
            scanf("%d", &employees[i].weeklyHours);
        } else if (strcmp(employees[i].type, "Salaried") == 0) {
            printf("Enter weekly salary: ");
            scanf("%lf", &employees[i].weeklySalary);
        } else {
            printf("Invalid type entered!\n");
            i--; // Retry for the same employee
        }
    }

    // Print employee details and calculate salary
    printf("\nEmployee Details:\n");
    for (int i = 0; i < numEmployees; i++) {
        printf("\nEmployee %d:\n", i + 1);
        printf("Name: %s\n", employees[i].name);
        printf("ID: %d\n", employees[i].id);
        printf("Type: %s\n", employees[i].type);

        if (strcmp(employees[i].type, "Hourly") == 0) {
            printf("Hourly Wage: %.2lf\n", employees[i].hourlyWage);
            printf("Weekly Hours: %d\n", employees[i].weeklyHours);
        } else if (strcmp(employees[i].type, "Salaried") == 0) {
            printf("Weekly Salary: %.2lf\n", employees[i].weeklySalary);
        }

        double salary = calculateSalary(&employees[i]);
        printf("Calculated Salary: %.2lf\n", salary);
    }

    // Free allocated memory
    free(employees);

    return 0;
}