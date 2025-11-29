/*WAP to take input into a character array/string & count the length of the string
  by using System defined func./ library func./ inbuilt func.
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20];
   printf("Enter the String = ");
   gets(x);
   printf("String = %s Length is %d",x,strlen(x));
}