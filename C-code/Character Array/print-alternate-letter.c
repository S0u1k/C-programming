//Print alternate letter
#include<stdio.h>
void main()
{
    char x[20],y[20];
    int i;
    printf("Enter the string =");
    gets(x);
    printf("Enter the  string = %s\n",x);
    printf("print alternate letter =");
    for(i=0;x[i]!='\0';i++)
    {
        if(i%2 == 0)
         printf("%c",x[i]);
    }
}