//WAP to check whether a no. is even or odd by using if statament ternary
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    (x==0)?printf("%d is Neutral No.",x):(x%2==0)?printf("%d is Even No.",x):printf("%d is Odd No.",x);     
}