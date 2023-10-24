#include <stdio.h>

int main() {
    int employeeID;
    float TotalHoursWorked, amountPerHour, salary;

    printf("Enter employee ID: ");
    scanf("%d", &employeeID);

    printf("Enter total hours worked: ");
    scanf(" %f", &TotalHoursWorked);

    printf("Enter amount per hour: ");
    scanf(" %f", &amountPerHour);

    salary = (TotalHoursWorked * amountPerHour);

    printf("Employee ID: %d\n", employeeID);
    printf("Salary: %.2f\n", salary);

    return 0;
}

