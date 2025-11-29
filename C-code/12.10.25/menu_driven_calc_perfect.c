//WAP to create a menu driven calculator by using switch case perfect
#include<stdio.h>
void main()
{
   printf("Press 1 for Add\nPress 2 for Subtract\nPress 3 for Multiply\nPress 4 for Div.\n");
   int x,a,b;
   printf("Enter the Choice= ");
   scanf("%d",&x);
   switch(x)
   {
     case 1:
        printf("Enter 2 No.= ");
        scanf("%d%d",&a,&b);
        printf("Addition = %d",a+b);
        break;
     case 2:
        printf("Enter 2 No.= ");
        scanf("%d%d",&a,&b);
        printf("Subtraction = %d",a-b);
        break;   
     case 3:
        printf("Enter 2 No.= ");
        scanf("%d%d",&a,&b);
        printf("Multiplication = %d",a*b);
        break;
     case 4:
        printf("Enter 2 No.= ");
        scanf("%d%d",&a,&b);
        printf("Division = %d",a/b);
        break;
     default:
        printf("N/A");
   }
}