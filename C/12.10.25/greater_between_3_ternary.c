//Greatest among 3 No.
#include<stdio.h>
void main()
{
   int a,b,c;
   printf("Enter 3 No. = ");
   scanf("%d%d%d",&a,&b,&c);
   (a>b && a>c)?printf("1st No. %d is Greatest",a):(b>c)?
   printf("2nd No. %d is Greatest",b):(a==b && b==c)?printf("All are Equal"):printf("3rd No. %d is Greatest",c);
}