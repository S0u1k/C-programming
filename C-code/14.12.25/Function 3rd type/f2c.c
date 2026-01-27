//farenheit to celcuis 3rd type
#include<stdio.h>
float f2c();
void main()
{
    printf("Celcuis =%.2f",f2c());
}
float f2c()
{
    float f,c;
    printf("Enter the no =");
    scanf("%f",&f);
    c=(f-32)*5/9;
    return c;
}