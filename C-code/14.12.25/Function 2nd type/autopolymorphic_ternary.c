//WAP to check whether a no. is autopolymorphic or not by using if statament ternary 2nd type
#include<stdio.h>
void auto1(int);
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    auto1(x);
}
void auto1(int x)
{
    ((x*x)%10==x || (x*x)%100==x)?printf("%d is Autopolymorphic No.",x):printf("%d is NOT Autopolymorphic No.",x);
}