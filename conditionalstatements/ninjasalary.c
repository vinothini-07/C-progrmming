#include <stdio.h>
#include <math.h>

int main() {
    int basic;
    char grade;
    float hra, da, pf;
    int gradeAllowance;
    float totalSalary;

    printf("Enter Basic Salary: ");
    scanf("%d", &basic);

    printf("Enter Grade (A/B/C): ");
    scanf(" %c", &grade);

    hra = 0.20 * basic;
    da  = 0.50 * basic;
    pf  = 0.11 * basic;

    if (grade == 'A')
        gradeAllowance = 1700;
    else if (grade == 'B')
        gradeAllowance = 1500;
    else
        gradeAllowance = 1300;

    totalSalary = basic + hra + da + gradeAllowance - pf;

    printf("Total Salary = %d\n", (int)round(totalSalary));

    return 0;
}