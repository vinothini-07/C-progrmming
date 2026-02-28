#include <stdio.h>

int main() {
    int chef, chefina;
    int result;

    printf("Enter Chef's dice number (1-6): ");
    result = scanf("%d", &chef);

    if (result != 1 || chef < 1 || chef > 6) {
        printf("Invalid input for Chef's dice!\n");
        return 1;
    }

    printf("Enter Chefina's dice number (1-6): ");
    result = scanf("%d", &chefina);

    if (result != 1 || chefina < 1 || chefina > 6) {
        printf("Invalid input for Chefina's dice!\n");
        return 1;
    }

    if (chef + chefina > 6)
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}