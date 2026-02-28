#include <stdio.h>

int main()
{
    int limit, i, n, rev, digit;

    printf("Enter limit: ");
    scanf("%d", &limit);

    if(limit <= 0)
    {
        printf("Invalid input");
        return 0;
    }

    for(i = 1; i <= limit; i++)
    {
        n = i;
        rev = 0;

        while(n > 0)
        {
            digit = n % 10; 
            rev = rev * 10 + digit; 
            n = n / 10; 
        }

        if(i == rev)
            printf("%d ", i);
    }

    return 0;
}
