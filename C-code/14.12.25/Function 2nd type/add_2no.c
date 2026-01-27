//WAP to add 2 no. by using func. 2nd type
#include<stdio.h>
void add(int,int);//func. declaration
void sub(int,int);//func. declaration
void main()
{
  int a,b;
  printf("Enter 2 No. = ");
  scanf("%d%d",&a,&b);//input
  add(a,b);//calling
  sub(a,b);//calling
}
void add(int x,int y)///func. definition
{
   printf("Addition = %d\n",x+y);
}
void sub(int x,int y)///func. definition
{
   printf("Subtraction = %d",x-y);
}