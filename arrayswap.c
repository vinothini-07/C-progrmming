#include <stdio.h>

int main() {
   
    int numbers[5] = {5, 15, 25, 35, 45};
    int temp; 

   
    printf("Original array: %d %d %d %d %d\n",numbers[0],numbers[1],numbers[2],numbers[3],numbers[4]);

    temp=numbers[0];
    numbers[0]=numbers[4];
    numbers[4]=temp;
    
    printf("After swapping: %d %d %d %d %d",numbers[0],numbers[1],numbers[2],numbers[3],numbers[4]);

    return 0; 
}
