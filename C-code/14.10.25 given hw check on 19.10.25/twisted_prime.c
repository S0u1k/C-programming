//twisted prime
#include <stdio.h>
void main()
{
    int n,i,f=0,rem,s=0,k=0,x;
    printf("enter the no = ");
    scanf("%d",&n);
    x=n;
    for(i=2;i<n;i++)
    {
        if (n%i == 0)
        {
            f=1;
            break;
        }
    }
    for(;n>0;n/=10)
    {
        rem=n%10;
        s=s*10+rem;
    }
    i=2;
    n=s;
    for(i=2;i<n;i++)
    {
        if (n%i == 0)
        {
            k=1;
            break;
        }
    }
    if (f==0 && k==0 && x!=1)
      printf("Twisted prime");
    else
     printf("not Twisted prime");
    

}