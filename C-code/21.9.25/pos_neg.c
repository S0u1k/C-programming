//Wap to check wheater a no is pos or not
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No =");
    scanf("%d",&x);
    if(x>0)
      printf("%d is positive no",x);
    else if(x==0)
     printf("%d is neutral no",x);
    else
     printf("%d is negative no",x);
}