//WAP to print the day 3rd type
#include<stdio.h>
int day();
int x;
void main()
{
    switch(day())
    {
        case 1:  //if(x==1)
          printf("Monday");
          break;
        case 2:
          printf("Tuesday");
          break;
        case 3:
          printf("Wednesday");
          break;
        case 4:
          printf("Thursday");
          break;
        case 5:
          printf("Friday");
          break;
        case 6:
          printf("Saturday");
          break;
        case 7:
          printf("Sunday");
          break;  
        default:
          printf("N/A");
    }
}
int day()
{
    printf("Enter the day in No. = ");
    scanf("%d",&x);
    return x;
}