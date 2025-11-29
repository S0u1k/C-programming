#include <stdio.h>
#include <math.h>
void main()
{
    int n, y, p, c = 0, a, b;
    printf("Enter the number = ");
    scanf("%d", &n);
    // Square root of number
    y = (int)sqrt(n);  // cast to int to avoid float issues
    printf("Square root: %d\n", y);
    // Count digits in the square root
    p = y;
    c = 0;
    while (p > 0)
    {
        c++;
        p = p / 10;
    }
    // Split the original number into two halves
    a = pow(10, c);
    b = ((n / a) + (n % a));  // left + right
    printf("Sum of parts: %d\n", b);
    // Check if square root equals sum of parts
    if (b == y)
        printf("%d is a Tech Number\n", n);
    else
        printf("%d is NOT a Tech Number\n", n);
}
