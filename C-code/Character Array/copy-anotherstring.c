//Copy 1 string to another string
#include<stdio.h>
void main()
{
    char x[20],y[20];
    int i;
    printf("Enter the string =");
    gets(x);
    printf("Enter the 1st string = %s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
        y[i]=x[i];
    }
    printf("copied string = %s",y);
}