

#include <stdio.h>

int main()
{
    int secret = 45; 
    int guess;
    int i;

    for(i = 1; i <= 7; i++)
    {
        printf("Attempt %d - Enter your guess (1-100): ", i);
        scanf("%d", &guess);

        
        if(guess < 1 || guess > 100)
        {
            printf("Invalid number! Enter between 1 and 100\n");
            i--;
            continue;
        }

        if(guess == secret)
        {
            printf("Correct! You guessed it.\n");
            break;
        }
        else if(guess > secret)
        {
            printf("Too High!\n");
        }
        else
        {
            printf("Too Low!\n");
        }
    }

    if(i == 8)
    {
        printf("Game Over! Secret number was %d\n", secret);
    }

    return 0;
}
