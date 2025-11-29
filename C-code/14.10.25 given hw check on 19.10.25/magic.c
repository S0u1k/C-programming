#include <stdio.h>

void main()
{
    int n, x, s = 0, rem;
    printf("Enter the number = ");
    scanf("%d", &n);
    x = n; // store the original number
    s = n;
    while (1)
    {
        s = 0;
        while (n > 0)
        {
            rem = n % 10;
            s = s + rem;
            n = n / 10;
        }
        if (s < 10)
            break; // exit when we get a single-digit number
        n = s; // repeat with new number (sum)
    }
    if (s == 1)
        printf("%d is a Magic number\n", x);
    else
        printf("%d is not a Magic number\n", x);
}
