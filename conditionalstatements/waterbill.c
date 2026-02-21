#include <stdio.h>

int main() {
    int consumption;
    int bill = 0, noBill = 0;
    int valid = 0, invalid = 0;
    int excess = 0;

    for (int i = 0; i < 5; i++) {
        scanf("%d", &consumption);
        if (consumption < 0) {
            invalid++;
        }
        else {
            
            valid++;

            
            if (consumption == 0) {
                noBill++;
            }
            else if (consumption >= 1 && consumption <= 100) {
                noBill++;
            }
            else if (consumption >= 101 && consumption <= 500) {
                bill++;
            }
            else {
                excess++;
                bill++;   
            }
        }
    }

    printf("%d\n", bill);
    printf("%d\n", noBill);
    printf("%d\n", valid);
    printf("%d\n", invalid);
    printf("%d\n", excess);

    
}