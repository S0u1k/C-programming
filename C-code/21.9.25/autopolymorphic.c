//WAP to check whether a no. is autopolymorphic or not by using if statament
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    if((x*x)%10==x || (x*x)%100==x)
        printf("%d is Autopolymorphic No.",x);
    else
        printf("%d is NOT Autopolymorphic No.",x);
}