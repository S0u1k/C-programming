//WAP to convert lower to upper
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
    printf("\nString = %s",x);
}