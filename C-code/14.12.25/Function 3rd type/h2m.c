//WAP to convert hour to minute 3rd type
int hour();//declration
#include<stdio.h>
void main()
{
    
    printf("Minute = %d",hour());
}
int hour()
{
    int h,m;
    printf("Enter the Hour = ");
    scanf("%d",&h);
    m=h*60;
    return m;
}