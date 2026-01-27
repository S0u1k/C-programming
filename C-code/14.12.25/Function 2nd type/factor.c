//WAP to print the factor of a no. 2nd type
#include<stdio.h>
void factor(int);
void main()
{
    int i,n;
    printf("Enter the No. = ");
    scanf("%d",&n);
    factor(n);
}
void factor(int n)
{
  printf("Factor of %d is = ",n);
    for(int i=1;i<=n;i++)
    {
       if(n%i==0)
       {
         if(i==n)
           printf("%d ",i);
         else
           printf("%d , ",i);
       }
    }
}