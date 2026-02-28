#include <stdio.h>

int main() {
    float hours, rate, totalSalary, overtimePay;
    int result1, result2;

    printf("Enter number of hours worked: ");
    result1 = scanf("%f", &hours);

    printf("Enter hourly rate: ");
    result2 = scanf("%f", &rate);

    
    if (result1 != 1 || result2 != 1) {
        printf("Invalid input! Please enter numeric values.\n");
        return 1;
    }


    if (hours < 0 || rate < 0) {
        printf("Invalid input! Hours and rate cannot be negative.\n");
        return 1;
    }

    if (hours <= 40) {
        totalSalary = hours * rate;
    } else {
        overtimePay = (hours - 40) * rate * 1.5;
        totalSalary = (40 * rate) + overtimePay;
    }

    printf("Total Salary = %.2f\n", totalSalary);

    return 0;
}