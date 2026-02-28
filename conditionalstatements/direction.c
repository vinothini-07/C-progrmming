#include <stdio.h>

int main() {
    float degree;

    scanf("%f", &degree);

    if (degree < 0 || degree > 360) {
        printf("Invalid degree value.\n");
    }
    else if ((degree >= 0 && degree < 90) || degree == 360) {
        printf("North\n");
    }
    else if (degree >= 90 && degree < 180) {
        printf("East\n");
    }
    else if (degree >= 180 && degree < 270) {
        printf("South\n");
    }
    else { 
        printf("West\n");
    }

    return 0;
}