//wap to print fibonacci series of a no. using recursion
//1,2,3,5,8,13,21
#include<stdio.h>
int fibo(int);
void main()
{
 int n,i;
 printf("Enter the Range=");
 scanf("%d",&n);//n=5
 for(i=0;i<n;i++)
  printf("%d ",fibo(i));  
 getch();
}
int fibo(int n)
{
  if(n==0 || n==1)//2==0
    return n;
  else
   return fibo(n-1)+fibo(n-2);//calling recursion 5+fibo(1-2)
}