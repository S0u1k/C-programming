/*WAP to take input into a character array/string & reverse the string
  by using System defined func./ library func./ inbuilt func.
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20];
   printf("Enter the String = ");
   gets(x);
   printf("Original String = %s",x);
   strrev(x);
   printf("\nReverse String = %s",x);
}