// reverse no. 2nd type
#include<stdio.h>

void rev1(int);

void main()
{
    int n;
    printf("Enter the No. = ");
    scanf("%d",&n);
    rev1(n);
}

void rev1(int n)
{
    int rem, rev = 0;

    for( ; n > 0; n = n / 10)
    {
        rem = n % 10;// for or if r scope r modhee {} er modhee intialize korle bethorei thakbe baire kaj korbe na
        rev = rev * 10 + rem;
    }

    printf("Reverse = %d", rev);
}
