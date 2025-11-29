/*WAP to take input into a character array/string & string copy
  by using System defined func./ library func./ inbuilt func.
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20],y[20]="";
   printf("Enter the String = ");
   gets(x);
   printf("Before Copy 1st String = %s",x);
   printf("\nBefore Copy 2nd String = %s",y);
   strcpy(y,x);
   printf("\nAfter Copy 1st String = %s",x);
   printf("\nAfter Copy 2nd String = %s",y);
   
}