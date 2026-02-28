#include <stdio.h>

int main() {
    int symptoms;
    int result;

    printf("Enter the number of symptoms experienced by the patient: ");
    result = scanf("%d", &symptoms);

    if (result != 1) {
        printf("Invalid input! Please enter a valid numeric value.\n");
        return 1;
    }

    if (symptoms < 0) {
        printf("Invalid input! Number of symptoms cannot be negative.\n");
    }
    else if (symptoms >= 5) {
        printf("\nCondition: Critical\n");
        printf("Priority Level: HIGH\n");
        printf("Immediate medical attention required.\n");
    }
    else if (symptoms >= 3) { 
        printf("\nCondition: Moderate\n");
        printf("Priority Level: MEDIUM\n");
        printf("Medical attention required soon.\n");
    }
    else { 
        printf("\nCondition: Stable\n");
        printf("Priority Level: LOW\n");
        printf("Patient can wait for a while.\n");
    }

    return 0;
}