#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the string =");
    gets(x);
    printf("Original String =%s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
        if(i==0 || x[i+1]=='\0')
          continue;
        else
          printf("%c ",x[i]);

    }
}