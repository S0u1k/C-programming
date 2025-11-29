/*
   input --> swagato kumar ghosh
   output -->GHOSH KUMAR SWAGATO
*/
#include<stdio.h>
void main()
{
    char x[20];
    int i,j,k;
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
    for(i=j-1;x[i]!=' ';i--)
      {
        k=i;
      }
    for(int a=k-1;a<=j;a++)
      printf("%c",x[a]);
    for(i=0;x[i]!=' ';i++)
      printf("%c",x[i]);    
}