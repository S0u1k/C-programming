//WAP to calc. area & circumference of Circ. 2nd type
void circle(float);//declaration
#include<stdio.h>
void main()
{
    float r;
   printf("Enter the Radius = ");
   scanf("%f",&r);
  circle(r);//calling
}
void circle(float r)//def
{
   
   float ar=3.14*r*r;
   float pr=2*3.14*r;
   printf("Area of Circ. = %.2f\nPerimeter = %.2f",ar,pr);
}