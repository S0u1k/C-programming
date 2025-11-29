//WAP to calc. area & perimeter of cuboid
#include<stdio.h>
void main()
{
    int a,ar,pr;
    printf("Enter the Side = ");
    scanf("%d",&a);
    ar=a*a*a;
    pr=6*a*a;
    printf("Area of Cuboid = %d \nPerimeter = %d",ar,pr);
}