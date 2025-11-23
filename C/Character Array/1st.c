//WAP to take character array (string) input & print the string
#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the Stirng = ");
    //scanf("%s",&x);
    gets(x);
    printf("String = %s\n",x);
    puts(x);
    printf("\n");
    for(i=0;x[i]!='\0';i++)
      printf("%c ",x[i]);
}