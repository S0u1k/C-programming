//Wap to check wheater  a no is buzz or not ternary
#include<stdio.h>
void main()
{
    int x;
    printf("enter the no = ");
    scanf("%d",&x);
    (x%7==0 && x%10==7)?printf("%d is Buzz no",x):printf("%d is not Buzz no",x);
}