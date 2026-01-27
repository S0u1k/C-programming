//WAP to check whether a Year is leap year or not by using if statament 2nd type
#include<stdio.h>
void leap(int);
void main()
{
  int y;
  printf("Enter the Year = ");
  scanf("%d",&y);
  leap(y);
}
void leap(int y)
{
  if(y%400==0)     
    printf("%d is Leap Year",y);
  else if(y%4==0 && y%100!=0)
    printf("%d is Leap Year",y);
  else
    printf("%d is NOT Leap Year",y);
}