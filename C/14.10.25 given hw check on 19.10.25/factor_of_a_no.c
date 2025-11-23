//WAP to print the factor of a no.
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the No. = ");
    scanf("%d",&n);
    printf("Factor of %d is = ",n);
    for(i=1;i<=n;i++)
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