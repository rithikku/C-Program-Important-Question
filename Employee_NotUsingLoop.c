// Without using loop 
#include <stdio.h>

// Define the structure "Employee"
struct Employee {
    int employeeID;
    char name[50];
    float salary;
};

int main() {
    // Declare variables to store details for three employees
    struct Employee employee1, employee2, employee3, employee4, employee5;

    // Input details for the first employee
    printf("Input details for Employee 1:\n");
    printf("Employee ID: ");
    scanf("%d", &employee1.employeeID);
    printf("Name: ");
    scanf("%s", employee1.name); // Assuming names do not contain spaces
    printf("Salary: ");
    scanf("%f", &employee1.salary);

    // Input details for the second employee
    printf("\nInput details for Employee 2:\n");
    printf("Employee ID: ");
    scanf("%d", &employee2.employeeID);
    printf("Name: ");
    scanf("%s", employee2.name);
    printf("Salary: ");
    scanf("%f", &employee2.salary);

    // Input details for the third employee
    printf("\nInput details for Employee 3:\n");
    printf("Employee ID: ");
    scanf("%d", &employee3.employeeID);
    printf("Name: ");
    scanf("%s", employee3.name);
    printf("Salary: ");
    scanf("%f", &employee3.salary);

    // Input details for the four employee
    printf("\nInput details for Employee 4:\n");
    printf("Employee ID: ");
    scanf("%d", &employee4.employeeID);
    printf("Name: ");
    scanf("%s", employee4.name);
    printf("Salary: ");
    scanf("%f", &employee4.salary);

    // Input details for the fifth employee
    printf("\nInput details for Employee 5:\n");
    printf("Employee ID: ");
    scanf("%d", &employee5.employeeID);
    printf("Name: ");
    scanf("%s", employee5.name);
    printf("Salary: ");
    scanf("%f", &employee5.salary);

    return 0;
}
