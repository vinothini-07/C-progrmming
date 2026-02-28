#include <stdio.h>

int main() {
    int X;                 
    int discount = 0;      
    int finalAmount;

    printf("Enter the total amount spent (1 - 10000): ");

    
    if (scanf("%d", &X) != 1) {
        printf("Invalid input! Please enter a valid integer amount.\n");
        return 0;
    }

    
    if (X < 1 || X > 10000) {
        printf("Amount must be between 1 and 10000.\n");
        return 0;
    }

   
    if (X <= 100) {
        discount = 0;
    }
    else if (X <= 1000) {
        discount = 25;
    }
    else if (X <= 5000) {
        discount = 100;
    }
    else {
        discount = 500;
    }

    finalAmount = X - discount;

    printf("\nTotal Amount: %d", X);
    printf("\nDiscount Applied: %d", discount);
    printf("\nFinal Amount to Pay: %d\n", finalAmount);

    return 0;
}