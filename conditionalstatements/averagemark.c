#include <stdio.h>

int main() {
    float phy, chem, bio, math, comp, average;

    printf("Enter marks for Physics, Chemistry, Biology, Mathematics, Computer: ");
    scanf("%f %f %f %f %f", &phy, &chem, &bio, &math, &comp);

    average = (phy + chem + bio + math + comp) / 5;

    printf("Average = %.2f\n", average);

    if (average >= 90)
        printf("Grade A\n");
    else if (average >= 80)
        printf("Grade B\n");
    else if (average >= 70)
        printf("Grade C\n");
    else if (average >= 60)
        printf("Grade D\n");
    else if (average >= 50)
        printf("Grade E\n");
    else
        printf("Grade F\n");

    return 0;
}