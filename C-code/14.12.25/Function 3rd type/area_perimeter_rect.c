//WAP to calc. area & perimeter of rect. by using func. 3rd type
#include<stdio.h>
int rect();
void main()
{
    int x;
    x=rect();
    printf("\nPerimeter = %d",x);
}
int rect()
{
   int len,br,pr;
   printf("Enter the Length & Breadth = ");
   scanf("%d%d",&len,&br);
   printf("Area = %d",len*br);
   pr=2*(len+br);
   return pr;
}