#include<stdio.h>
void main()
{
    char x[20];
    int i,j,len=0,f=0;
    printf("Enter the String = ");
    gets(x);
    for(i=0;x[i]!='\0';i++)
    {
        len++;
    }
    //Capital
    for(i=0;x[i]!='\0';i++)
    {
        if(x[i]>=97 && x[i]<=122)
          x[i]=x[i]-32;
    }
    for(i=0,j=len-1;i<=j;i++,j--)
    {
        if(x[i]!=x[j])
        {
            f=1;
            break;
        }
    }
    if(f==0)
     printf("It's palindrome String ");
    else
     printf("It's NOT palindrome String ");
}