//Area & Perimeter of Rectangle function 2nd type
#include<stdio.h>
void rectangle(float, float);   // function declaration
void main()
{
    float l, b;

    printf("Enter the Length = ");
    scanf("%f", &l);

    printf("Enter the Breadth = ");
    scanf("%f", &b);

    rectangle(l, b);   // function call with parameters
}
void rectangle(float l, float b)   // function definition
{
    float area, peri;
    area = l * b;
    peri = 2 * (l + b);
    printf("Area of Rectangle = %.2f\n", area);
    printf("Perimeter of Rectangle = %.2f", peri);
}
