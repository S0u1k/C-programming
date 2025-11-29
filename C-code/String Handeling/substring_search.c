/*WAP to take input into a character array/string & search substring within a string      
  by using System defined func./ library func./ inbuilt func.
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20],y[20],*t=NULL;
   printf("Enter the 1st String = ");
   gets(x);
   printf("Enter the 2nd String = ");
   gets(y);
   t=strstr(x,y);
   if(t!=NULL)
     printf("%s Found",y);
   else
     printf("%s NOT Found",y);
}