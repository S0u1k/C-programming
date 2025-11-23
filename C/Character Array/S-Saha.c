/*WAP to print the acromatic string 
  input --->souvik saha
  output-->S.Saha
*/
#include<stdio.h>
void main()
{
    char x[20];
    int i,j;
    printf("Enter the Stirng = ");
    gets(x);
    printf("String = %s",x);//ram das
    //Capital
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=97 && x[i]<=122)
          x[i]=x[i]-32;
    }
    printf("\nString = %s\n",x);//PRATIMA DAS
    printf("%c",x[0]);
    for(i=1;x[i]!='\0';i++)
    {
         if(x[i]==' ')
         {
           printf(".%c",x[i+1]);
           j=i;
         }
    }
    //Small
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=65 && x[i]<=90)
          x[i]=x[i]+32;
    }
    //last space r por letter
    for(i=j+2;x[i]!='\0';i++)
      printf("%c",x[i]);
}