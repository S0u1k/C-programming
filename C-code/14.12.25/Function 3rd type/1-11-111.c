//WAP to print 1 11 111 1111 --n term & sum
#include<stdio.h>
int series();//declaration
void main()
{
    printf(" = %d",series());
}
int series()//definition
{
   int i,n,j,s=0;
   printf("Enter the Range = ");
   scanf("%d",&n);
   for(i=1,j=1;i<=n;i++,j=(j*10)+1)
   {
      printf("%d ",j);
      s+=j;
   }
   return s;
}