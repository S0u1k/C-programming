// Pronic number check (n = i * (i + 1)) 3rd type
#include <stdio.h>
int pro();
void main()
{
    int f =pro();
    if (f == 1)
        printf("Pronic number");
    else
        printf("Not Pronic number");
}
int pro()
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
        return 1;
    else
        return 0;
}

