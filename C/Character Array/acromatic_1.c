/*WAP to print the acromatic string 
  input ---> pratima kumari das
  output-->P.K.D.
*/
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the Stirng = ");
    gets(x);
    printf("String = %s",x);//ram das
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=97 && x[i]<=122)
          x[i]=x[i]-32;
    }
    printf("\nString = %s\n",x);//PRATIMA DAS
    for(i=0;x[i]!='\0';i++)
    {
         if(i==0)
           printf("%c.",x[0]);//P.
         else if(x[i]==' ')
           printf("%c.",x[i+1]);//D.
    }
}