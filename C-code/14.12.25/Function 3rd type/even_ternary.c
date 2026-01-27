//WAP to check whether a no. is even or odd by using if statament ternary 3rd type
#include<stdio.h>
int even();
void main()
{
    int x=even();
    (x==0)?printf("%d is Neutral No.",x):(x%2==0)?printf("%d is Even No.",x):printf("%d is Odd No.",x);     
}
int even()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    return x;
}