//WAP to convert celcuis to farenheit 2nd type
void c2f(float);
#include<stdio.h>
void main()
{
    float c;
    printf("Enter the Celcius Value = ");
    scanf("%f",&c);
    c2f(c);
}
void c2f(float c)
{
    float f=(9*c+160)/5;
    printf("Farenheit value = %.2f",f);
}