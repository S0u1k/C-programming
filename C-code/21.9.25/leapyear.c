//WAP to check whether a Year is leap year or not by using if statament
#include<stdio.h>
void main()
{
  int y;
  printf("Enter the Year = ");
  scanf("%d",&y);
  if(y%400==0)     
    printf("%d is Leap Year",y);
  else if(y%4==0 && y%100!=0)
    printf("%d is Leap Year",y);
  else
    printf("%d is NOT Leap Year",y);
}