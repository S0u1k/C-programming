/*
    input---> zebra      122-25=97          90-25=65
    output--> afcsb
*/
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the Stirng = ");
    gets(x);
    printf("String = %s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
       if(x[i]=='z' || x[i]=='Z')
          x[i]=x[i]-25;
       else if(x[i]==' ')
         continue;
       else
         x[i]=x[i]+1;               
    }
    printf("%s",x);
}