//neon no.
#include<stdio.h>
void main()
{
    int n,rem,s=0,sq;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(sq=n*n;sq>0;sq=sq/10)
    {
        rem=sq%10;
        s=s+rem;
    }
    if(s==n)
     printf("%d is Neon No. ",n);
    else
     printf("%d is NOT Neon No. ",n);
}