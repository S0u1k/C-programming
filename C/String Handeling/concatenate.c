/*WAP to take input into a character array/string & string concatenate
  by using System defined func./ library func./ inbuilt func.
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20],y[20];
   printf("Enter the 1st String = ");
   gets(x);
   printf("Enter the 2nd String = ");
   gets(y);
   printf("Before Concatenate 1st String = %s",x);
   printf("\nBefore Concatenate 2nd String = %s",y);
   strcat(y,x);
   printf("\nAfter Concatenate 1st String = %s",x);
   printf("\nAfter Concatenate 2nd String = %s",y);
}