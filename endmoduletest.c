#include <stdio.h>

int main()
{
    int start, end, i, j, isPrime, sum = 0;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    for (i = start; i <= end; i++)
    {
        if (i < 2)
            continue;

        isPrime = 1;

        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }

        if (isPrime)
        {
            sum = sum + i;
        }
    }

    printf("Sum of prime numbers = %d\n", sum);

    return 0;
}