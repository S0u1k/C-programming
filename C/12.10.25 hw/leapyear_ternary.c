//WAP to check whether a Year is leap year or not by using ternary
#include<stdio.h>
void main()
{
  int y;
  printf("Enter the Year = ");
  scanf("%d",&y);
  (y%400==0)?printf("%d is Leap Year",y):(y%4==0 && y%100!=0)?
  printf("%d is Leap Year",y):printf("%d is NOT Leap Year",y);

}