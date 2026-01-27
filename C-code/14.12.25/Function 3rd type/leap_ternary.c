//WAP to check whether a Year is leap year or not by using ternary 3rd type
#include<stdio.h>
int leap();
void main()
{
  int y=leap();
  (y%400==0)?printf("%d is Leap Year",y):(y%4==0 && y%100!=0)?
  printf("%d is Leap Year",y):printf("%d is NOT Leap Year",y);

}
int leap()
{
  int y;
  printf("Enter the Year = ");
  scanf("%d",&y);
  return y;
}