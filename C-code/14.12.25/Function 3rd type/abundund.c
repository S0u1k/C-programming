//abundund 3rd type
#include <stdio.h>
int bd();
void main()
{
    int sum=bd();
    if(sum ==1)
        printf(" is an Abundant number.");
    else
        printf(" is NOT an Abundant number.");
}
int bd()
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
    printf("%d",n);
    // Check if abundant
    if(sum > n)
        return 1;
    else
       return 0;
}
