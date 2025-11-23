//WAP to take character array (string) input & count the length of a string
#include<stdio.h>
void main()
{
    char x[20];
    int i,c=0;
    printf("Enter the Stirng = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        printf("%c",x[i]);
        c++;
    }
    printf("\nTotal letter = %d",c);
}
