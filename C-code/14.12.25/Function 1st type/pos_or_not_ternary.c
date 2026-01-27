//Wap to check wheater a no is pos or not ternary 1st type
#include<stdio.h>
void pos();
void main()
{
    pos();
}
void pos()
{
    int x;
    printf("Enter the No =");
    scanf("%d",&x);
    (x>0)?printf("%d is positive no",x):(x==0)?printf("%d is neutral no",x):printf("%d is negative no",x);
}