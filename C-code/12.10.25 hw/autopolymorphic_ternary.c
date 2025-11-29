//WAP to check whether a no. is autopolymorphic or not by using if statament ternary
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    ((x*x)%10==x || (x*x)%100==x)?printf("%d is Autopolymorphic No.",x):printf("%d is NOT Autopolymorphic No.",x);
}