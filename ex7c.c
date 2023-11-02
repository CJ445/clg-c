#include <stdio.h>

float calculateGrossPay(float hoursWorked, float hourlyRate) {
    return hoursWorked * hourlyRate;
}

float calculateNetPay(float grossPay, float taxRate) {
    return grossPay - (grossPay * taxRate);
}

int main() {
    char employeeName[50];
    float hoursWorked, hourlyRate, taxRate, grossPay, netPay;

    printf("Enter employee name: ");
    scanf("%s", employeeName);

    printf("Enter hours worked: ");
    scanf("%f", &hoursWorked);

    printf("Enter hourly rate: ");
    scanf("%f", &hourlyRate);

    printf("Enter tax rate (as a decimal, e.g., 0.10 for 10%): ");
    scanf("%f", &taxRate);

    grossPay = calculateGrossPay(hoursWorked, hourlyRate);

    netPay = calculateNetPay(grossPay, taxRate);

    printf("\nEmployee Payroll \n");
    printf("Name: %s\n", employeeName);
    printf("Hours Worked: %.2f\n", hoursWorked);
    printf("Hourly Rate: Rs.%.2f\n", hourlyRate);
    printf("Gross Pay: Rs.%.2f\n", grossPay);
    printf("Net Pay: Rs.%.2f\n", netPay);

    return 0;
}
