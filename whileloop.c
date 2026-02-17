#include <stdio.h>

int main() {
    int shelves, totalBoxes = 0;

   
    scanf("%d", &shelves);

    
    while (shelves > 0) {
           totalBoxes+=5;
           

      
        if (totalBoxes%10==0) {
            printf("Special Shelf! Total number of boxes: %d\n", totalBoxes);
        } else {
            printf("Total number of boxes: %d\n", totalBoxes);
        }

          shelves--;
    }

    return 0;
}