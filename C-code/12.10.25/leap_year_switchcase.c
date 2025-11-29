//WAP to check whether a year is leap year or not by using switch case
#include<stdio.h>
void main()
{
   int x;
   printf("Enter the Year = ");
   scanf("%d",&x);
   switch(x%400==0)
    {
      case 1:
           printf("%d is Leap Year ",x);
           break;
      case 0:
          switch(x%4==0 && x%100!=0)
          {
            case 1:
               printf("%d is Leap Year ",x);
               break;
            default:
               printf("%d is NOT Leap Year ",x);
               
          }

    }
}