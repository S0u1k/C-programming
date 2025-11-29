//Wap to check wheater  a no is buzz or not 
#include<stdio.h>
void main()
{
    int x;
    printf("enter the no = ");
    scanf("%d",&x);
    if (x%7==0 && x%10==7)
     printf("%d is Buzz no",x);
    else
     printf("%d is not Buzz no",x);
}