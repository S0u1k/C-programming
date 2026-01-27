//WAP to check whether a no. is even or odd by using Func. 3rd type
#include<stdio.h>
int evenodd();//func. declaration
void main()
{
    int a;
    a=evenodd();//calling
    (a==1)?printf("Even No."):(a==0)?printf("Odd No."):printf("Neutral No.");
}
int evenodd()
{
    int x;
    printf("Enter the No. = ");
    scanf("%d",&x);
    if(x==0)
      return 2;
    else if(x%2==0)
      return 1;
    else
      return 0;
      
}