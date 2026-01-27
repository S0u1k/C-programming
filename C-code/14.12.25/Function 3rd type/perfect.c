//WAP to check whether a no. is perfect or not 
/* 6,28,496 6--> 1,2,3 1+2+3=6 
sum of factor 28-->1+2+4+7+14=28 3rd type */
#include<stdio.h>

int perfect();   // function declaration

void main()
{
    int r;
    r = perfect();   // function call

    if(r == 1)
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");
}

int perfect()
{
    int n, i, s = 0;

    printf("Enter the No. = ");
    scanf("%d", &n);

    for(i = 1; i <= n/2; i++)
    {
        if(n % i == 0)
            s = s + i;
    }

    if(s == n)
        return 1;
    else
        return 0;
}
