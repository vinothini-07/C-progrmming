#include <stdio.h>

int main() {
    int hour, minute;

    scanf("%d %d", &hour, &minute);

   
    if (hour < 0 || hour > 23 || minute < 0 || minute > 59) {
        printf("Invalid time entered!\n");
        return 0;
    }

    if (hour == 0) {
        printf("Time in 12-hour format: 12:%02d AM\n", minute);
    }
    else if (hour < 12) {
        printf("Time in 12-hour format: %02d:%02d AM\n", hour, minute);
    }
    else if (hour == 12) {
        printf("Time in 12-hour format: 12:%02d PM\n", minute);
    }
    else {
        printf("Time in 12-hour format: %02d:%02d PM\n", hour - 12, minute);
    }

    return 0;
}