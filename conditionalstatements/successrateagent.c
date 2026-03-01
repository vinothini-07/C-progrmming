#include <stdio.h>

int main() {
    int n, i;
    float successRate, highestRate = 0;
    int highestAgent = -1;

    printf("Enter number of agents: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("Enter success rate of Agent %d (in percentage): ", i);
        scanf("%f", &successRate);

        if (successRate > highestRate) {
            highestRate = successRate;
            highestAgent = i;
        }
    }

    if (highestAgent != -1)
        printf("Agent %d has the highest priority with success rate %.2f%%\n"   ,highestAgent, highestRate);

    return 0;
}