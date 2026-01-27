//wap to convert decimal to binary 2nd type
#include<stdio.h>
#include<conio.h>
void convert(int);
void main()
{
  int x;
  printf("Enter the No.= ");
  scanf("%d",&x);
  convert(x);
}
void convert(int x)
{
  int rem=0,s=0,i=1,n;
  for(n=x;x>0;x=x/2)
  {
   rem=x%2;
   s=s+(rem*i);
   i=i*10;
  }
   printf("Decimal No. = %d Equivalent Binary No. = %d",n,s);
}