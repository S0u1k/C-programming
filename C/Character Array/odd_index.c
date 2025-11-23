#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the string =");
    gets(x);
    printf("Original string =%s\n",x);
     printf("Odd Index =");
    for(i=0;x[i]!='\0';i++)
    {
        if (i%2!=0)
        {
            printf("%c ",x[i]);
        }
    }
}