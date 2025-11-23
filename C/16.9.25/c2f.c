//WAP to convert celcuis to farenheit
#include<stdio.h>
void main()
{
    float c,f;
    printf("Enter the Celcius Value = ");
    scanf("%f",&c);
    f=(9*c+160)/5;
    printf("Farenheit value = %.2f",f);
}