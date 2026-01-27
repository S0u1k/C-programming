//twisted prime 2nd type
#include <stdio.h>
void prime(int);
void main()
{
    int n;
    printf("enter the no = ");
    scanf("%d",&n);
    prime(n);
}
void prime(int n)
{
    int i,f=0,rem,s=0,k=0,x;
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