/*WAP to take input into a character array/string & search a letter within a string      
  by using System defined func./ library func./ inbuilt func.
*/
#include<stdio.h>
#include<string.h>
void main()
{
   char x[20],y,*t=NULL;
   printf("Enter the 1st String = ");
   gets(x);
   printf("Enter the letter = ");
   scanf("%c",&y);
   t=strchr(x,y);
   if(t!=NULL)
     printf("%c Found",y);
   else
     printf("%c NOT Found",y);
}