//WAP to take character array (string) input & print the reverse of a string
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the Stirng = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        printf("%c",x[i]);
    }
    printf("\nReverse String = ");
    for(i=i-1;i>=0;i--)
     printf("%c",x[i]);
}