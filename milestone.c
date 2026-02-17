#include <stdio.h>

int main() {
    int M, N, currentTask;
    scanf("%d", &M);
   
    scanf("%d", &N);

    currentTask = M;  
    while (currentTask>=N) {
        
        if (currentTask%4==0) {
            printf("Task Milestone! Task #%d\n",currentTask);
        } else {
            printf("Task #%d\n", currentTask);
        }

       currentTask-=2;
    }

    return 0;
}
