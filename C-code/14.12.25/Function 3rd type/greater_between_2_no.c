// WAP to check greater between 2 numbers using ternary operator (3rd type)
#include<stdio.h>
int gb2();   // function declaration
void main()
{
    int r;
    r = gb2();   // function calling

    (r == 1) ? printf("1st Number is Greater") : (r == 0) ? printf("Both are Equal") :printf("2nd Number is Greater");
}
int gb2()
{
    int a, b;
    printf("Enter 2 Numbers = ");
    scanf("%d%d", &a, &b);
    return (a > b) ? 1 : (a == b) ? 0 : -1;
}
