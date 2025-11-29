//WAP to convert lower to uppercase & vice versa
#include<stdio.h>
void main()
{
    char x;
    printf("Enter the Character = ");
    scanf("%c",&x);
    if(x>=65 && x<=90)
      printf("%c",x+32);
    else if(x>=97 && x<=122)
      printf("%c",x-32);
    else
      printf("%c",x);
}