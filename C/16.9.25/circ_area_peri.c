//WAP to calc. area & circumference of Circ.
#include<stdio.h>
void main()
{
   float r,ar,pr;
   printf("Enter the Radius = ");
   scanf("%f",&r);
   ar=3.14*r*r;
   pr=2*3.14*r;
   printf("Area of Circ. = %.2f\nPerimeter = %.2f",ar,pr);
}