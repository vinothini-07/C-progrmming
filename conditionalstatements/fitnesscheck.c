#include <stdio.h>

int main() {
    int steps;
    float time;

    printf("Enter number of steps taken: ");
    scanf("%d", &steps);

    printf("Enter time taken (in minutes): ");
    scanf("%f", &time);

    
    if (steps < 0 || time < 0) {
        printf("Invalid input! Please enter positive values.\n");
    }
    else if (steps < 5000) {
        printf("Fitness Level: Sedentary\n");
    }
    else if (steps >= 5000 && steps < 8000 && time >= 30) {
        printf("Fitness Level: Moderately Active\n");
    }
    else if (steps >= 8000 && steps < 12000 && time >= 45) {
        printf("Fitness Level: Active\n");
    }
    else if (steps >= 12000 && time >= 60) {
        printf("Fitness Level: Highly Active\n");
    }
    else {
        printf("Fitness Level: Below Recommended Activity Level\n");
    }

    return 0;
}
