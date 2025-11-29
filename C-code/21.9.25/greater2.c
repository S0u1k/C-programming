//Wap to greater between 2 no
#include<stdio.h>
void main()
{
    int x,y;
    printf("enter 2 no =");
    scanf("%d%d",&x,&y);
    if (x==y)
     printf("%d%dBoth are equal",x,y);
    else if (x>y)
    printf("%d is(1st) greater",x);
    else
     printf("%d is(2nd) greater",y);
}