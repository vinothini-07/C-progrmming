#include <stdio.h>

int main() {
   
    short arr_short[5];   
    int arr_int[3];       

    
    printf("Total memory for short array: %zu bytes\n", sizeof(arr_short));
    printf("Total memory for int array: %zu bytes\n", sizeof(arr_int));

    
    
    int length=sizeof(arr_short)/sizeof(arr_short[0]);
    int inlength=sizeof(arr_int)/sizeof(arr_int[1]);
    int size1=sizeof(arr_short)/length;
    int size2=sizeof(arr_int)/inlength;
    printf("Size of one short element: %zu bytes\n",size1);
    printf("Size of one int element: %zu bytes\n",size2);

    
    printf("Elements in short array: %zu\n", length);
    printf("Elements in int array: %zu\n", inlength);

    return 0;
}