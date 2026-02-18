#include <stdio.h>

int main()
{
    float X, Y, D; 
    float time;

    printf("Enter Jerry speed (X): ");
    scanf("%f", &X);

    printf("Enter Tom speed (Y): ");
    scanf("%f", &Y);

    printf("Enter Initial Distance (D): ");
    scanf("%f", &D);

    
    if (Y <= X)
    {
        printf("\nTom cannot catch Jerry\n");
    }
    else
    {
        time = D / (Y - X); 
        printf("\nTom will catch Jerry\n");
        printf("Time taken to catch = %.2f seconds\n", time);
    }

    return 0;
}