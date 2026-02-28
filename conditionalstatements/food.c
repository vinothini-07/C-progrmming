#include <stdio.h>

int main() {
    int age;
    int result;

    printf("Enter your age: ");
    result = scanf("%d", &age);

    
    if (result != 1) {
        printf("Invalid input! Please enter a numeric value.\n");
        return 1;
    }

    
    if (age < 0) {
        printf("Invalid age! Age cannot be negative.\n");
    }
    else if (age <= 5) {
        printf("Recommended food: Mashed vegetables or soft fruits.\n");
    }
    else if (age >= 6 && age <= 12) {
        printf("Recommended food: Sandwiches or rice with vegetables.\n");
    }
    else if (age >= 13 && age <= 18) {
        printf("Recommended food: Burgers or pasta.\n");
    }
    else if (age >= 19 && age <= 50) {
        printf("Recommended food: Balanced diet (rice, chapati, vegetables, lean meat).\n");
    }
    else { 
        printf("Recommended food: Soup or grilled fish.\n");
    }

    return 0;
}