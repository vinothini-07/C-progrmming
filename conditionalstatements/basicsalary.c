#include <stdio.h>

int main() {
    float basic, hra, da, gross_salary;

    printf("Basic Salary: ");
    scanf("%f", &basic);

    if (basic <= 70000) {
        hra = 0.30 * basic;  
        da  = 0.80 * basic;  

        gross_salary = basic + hra + da;

        printf("\nHRA = %.2f", hra);
        printf("\nDA = %.2f", da);
        printf("\nGross Salary = %.2f", gross_salary);
    } 
    else {
        printf("\nNot applicable (Basic > 70000).");
    }

    return 0;
}