// Pronic number check (n = i * (i + 1))
#include <stdio.h>

void main()
{
    int i, n, f = 0;
    printf("Enter the number = ");
    scanf("%d", &n);

    i = 1;
    while (i <= n)
    {
        if (i * (i + 1) == n)
        {
            f = 1;
            break;
        }
        i++;
    }

    if (f == 1)
        printf("Pronic number");
    else
        printf("Not Pronic number");
}
