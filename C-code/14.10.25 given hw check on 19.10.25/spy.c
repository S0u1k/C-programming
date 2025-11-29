//spy no.
#include<stdio.h>
void main()
{
    int n,rem,s=0,x,p=1;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(x=n;n>0;n=n/10)
    {
        rem=n%10;
        s=s+rem;
        p=p*rem;
    }
    if(s==p)
     printf("%d is Spy No. ",x);
    else
     printf("%d is NOT Spy No. ",x);
}