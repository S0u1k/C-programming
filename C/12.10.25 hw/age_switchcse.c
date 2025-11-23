/*age calculation.
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
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);
    switch(age) 
    {
        case 1 ... 6:
            printf("Infant");
            break;
        case 7 ... 12:
            printf("Child");
            break;
        case 13 ... 18:
            printf("Teenager");
            break;
        case 19 ... 35:
            printf("Young Age");
            break;
        case 36 ... 60:
            printf("Middle Aged");
            break;
        case 61 ... 100:
            printf("Old Aged");
            break;
        case 101 ... 200:
            printf("Go to Hell");
            break;
        default:
            printf("Not Applicable");
    }
}
