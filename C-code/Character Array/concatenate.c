//WAP to CONCATENATE 2 STRING
#include<stdio.h>
void main()
{
    char x[20],y[20],z[20];
    int i,j;
    printf("Enter the 1st Stirng = ");
    gets(x);
    printf("Enter the 2nd Stirng = ");
    gets(y);
    for(i=0;x[i]!='\0';i++)
    {
        z[i]=x[i];
    }
    z[i]=' ';
    for(j=0,i++;y[j]!='\0';j++)
    {
        z[i]=y[j];
        i++;
    }
    z[i]='\0';
    printf("After Concatenate = %s",z);
}