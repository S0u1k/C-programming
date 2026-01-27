//spy no. 2nd type
#include<stdio.h>
void sp(int);
void main()
{
    int n;
    printf("Enter the No. = ");
    scanf("%d",&n);
    sp(n);
}
void sp(int n)
{
    int rem,s=0,x,p=1;
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