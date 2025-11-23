#include <stdio.h>

void main()
{
    int n, i, sum = 0;
    printf("Enter a number = ");
    scanf("%d", &n);

    // Find the sum of divisors
    for(i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    // Check if abundant
    if(sum > n)
        printf("%d is an Abundant number.\n", n);
    else
        printf("%d is NOT an Abundant number.\n", n);
}
