/*WAP to take input into a character array/string & count the length of the string
  by using System defined func./ library func./ inbuilt func.
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20];
   int a;
   printf("Enter the String = ");
   gets(x);
   a=strlen(x);
   printf("String = %s Length is %d",x,a);
}