//Wap to check wheater a no is pos or not ternary
#include<stdio.h>
void main()
{
    int x;
    printf("Enter the No =");
    scanf("%d",&x);
    (x>0)?printf("%d is positive no",x):(x==0)?printf("%d is neutral no",x):printf("%d is negative no",x);
}