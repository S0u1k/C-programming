// WAP to print 1-n by using while loop (3rd type)
#include <stdio.h>

int hi();

void main()
{
    int i = 1;
    int n = hi();   // function call

    while(i <= n)
    {
        printf("%d ", i);
        i++;
    }
}

int hi()
{
    int n;
    printf("Enter the Range = ");
    scanf("%d", &n);
    return n;
}
