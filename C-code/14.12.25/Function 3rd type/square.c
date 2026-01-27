#include<stdio.h>

float square();   // function declaration

void main()
{
    float a, p;
    a = square();          
    printf("Area of Square = %.2f\n", a*a);
    printf("Perimeter of Square = %.2f", 4*a);// perimeter logic using returned value
}

float square()   // function definition
{
    float s;
    printf("Enter the Side = ");
    scanf("%f", &s);

    return s;   // returning area
}
