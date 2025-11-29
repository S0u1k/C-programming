/*. age calculation.
    >0  <=6   --> Infant
    >6  <=12   -->Child
   >12  <=18  --> Teenager
   >18  <=35  --> Young Age
  >35  <=60   --> Middle Aged
  >60  <=100  -->Old Aged
  >100   -->  Go to Hell
  <0   --> Not Applicable
*/
#include <stdio.h>
int main() 
{
    int a;
    printf("Enter your age: ");
    scanf("%d", &a);
    if (a>0 && a<=6) 
        printf("You are a Infant");
    else if (a >6 && a <= 12) 
        printf("You are a child");
    else if (a > 12 && a <= 18)
        printf("You are an Teenager.");
    else if (a >18 && a <= 35)
        printf("You are an Young Age.");
    else if (a > 35 && a <= 60)
        printf("You are an Middle Aged.");
    else if (a > 60 && a <= 100)
        printf("You are an Old Aged");
    else if (a>100)
        printf("Go to Hell");
    else 
        printf("Not applicable");
}