#include <stdio.h>

int main() {
    float percentage;

    printf("Enter student's percentage: ");
    scanf("%f", &percentage);

    if (percentage >= 95)
        printf("Grade A\n");
    else if (percentage >= 85)
        printf("Grade B\n");
    else if (percentage >= 75)
        printf("Grade C\n");
    else if (percentage >= 65)
        printf("Grade D\n");
    else if (percentage >= 45)
        printf("Grade E\n");
    else
        printf("Grade F\n");

    return 0;
}