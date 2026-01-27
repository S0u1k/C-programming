//wap to print factorial of a no. using recursion
#include<stdio.h>
#include<conio.h>
int fact(int);//declaration
void main()
{
 int n;
 printf("Enter the No.=");
 scanf("%d",&n);//n=1
 (n>=0)?printf("The Factorial of the No. %d is %d",n,fact(n)):printf("-ve no. factorial can't be possible");//calling
 getch();
}
int fact(int n)//func. definition 
{
  if(n==0 || n==1)
   return 1;
  else
   return n*fact(n-1);// recursive func.
}