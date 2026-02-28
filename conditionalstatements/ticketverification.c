#include <stdio.h>

int main() {
    int age;
    scanf("%d", &age);
    if (age < 0 ) {
        printf("Invalid age!");
        return 0;
    }

   if (age <= 12) {
        printf("Ticket Type: Child Ticket\n");
    } else {
        printf("Ticket Type: Regular Ticket\n");
    }

    return 0;
}