#include <stdio.h>

int main() {
    int age;
    float tuitionFee, totalExpenses;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18 && age <= 25) {
        printf("Enter annual tuition fee: ");
        scanf("%f", &tuitionFee);

        printf("Enter total annual expenses: ");
        scanf("%f", &totalExpenses);

        if (tuitionFee > totalExpenses)
            printf("Tuition fee is higher than total expenses.\n");
        else if (tuitionFee < totalExpenses)
            printf("Total expenses are higher than tuition fee.\n");
        else
            printf("Tuition fee and total expenses are equal.\n");
    } else {
        printf("Age not in the eligible range (18-25).\n");
    }

    return 0;
}