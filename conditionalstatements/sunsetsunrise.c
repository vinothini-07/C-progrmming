#include <stdio.h>

int main() {
    int month;
    scanf("%d", &month);

    switch(month) {
        case 1:
        case 2:
        case 10:
        case 11:
        case 12:
            printf("\nSunrise: 7:00 AM");
            printf("\nSunset : 5:30 PM");
            break;

        case 3:
            printf("\nSunrise: 6:30 AM");
            printf("\nSunset : 6:30 PM");
            break;

        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            printf("\nSunrise: 5:30 AM");
            printf("\nSunset : 7:30 PM");
            break;

        case 9:
            printf("\nSunrise: 6:30 AM");
            printf("\nSunset : 6:00 PM");
            break;

        default:
            printf("\nInvalid month! Please enter a value between 1 and 12.");
    }

    return 0;
}