#include<stdio.h>
void main()
{
    char x[20];
    int i;
    printf("Enter the string =");
    gets(x);
    printf("Original string =%s\n",x);
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=97 && x[i]<=122)
          x[i]=x[i]-32;
    }
    printf("after string =%s",x);
}