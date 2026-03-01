#include <stdio.h>

int main() {
    int pens, notebooks, pencils;
    int totalAmount;

    const int costPen = 20;
    const int costNotebook = 70;
    const int costPencil = 9;

    printf("Enter quantity of pens: ");
    scanf("%d", &pens);

    printf("Enter quantity of notebooks: ");
    scanf("%d", &notebooks);

    printf("Enter quantity of pencils: ");
    scanf("%d", &pencils);

    totalAmount = (pens * costPen) + 
                  (notebooks * costNotebook) + 
                  (pencils * costPencil);

    printf("Total Amount = %d \n", totalAmount);

    return 0;
}