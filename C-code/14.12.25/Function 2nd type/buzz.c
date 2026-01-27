//wap to check whether a no. is buzz or not 2nd type
#include<stdio.h>
void buzz(int);//func. declaration
void main()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
   buzz(x);//calling
}
void buzz(int x)  //func. definition
{
    if(x%7==0 && x%10==7)
      printf("%d  is Buzz No.",x);
    else
      printf("%d is NOT Buzz No.",x);
}