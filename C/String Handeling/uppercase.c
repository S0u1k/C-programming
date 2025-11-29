/*WAP to take input into a character array/string & convert it into uppercase
  by using System defined func./ library func./ inbuilt func.
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20];
   printf("Enter the 1st String = ");
   gets(x);
   printf("Name = %s",x);
   strupr(x);
   printf("\nName = %s",x);
}