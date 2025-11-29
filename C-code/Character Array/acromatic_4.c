/*
   input --> swagato kumar ghosh
   output -->GHOSH SWAGATO KUMAR
*/
#include<stdio.h>
void main()
{
    char x[20];
    int i,j;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>='a' && x[i]<='z')
          x[i]=x[i]-32;
        if(x[i]==' ')
          j=i;
    }
    printf("\nString = %s\n",x);
    for(i=j+1;x[i]!='\0';i++)
      printf("%c",x[i]);
    printf(" ");
    for(i=0;i<j;i++)
      printf("%c",x[i]);
}