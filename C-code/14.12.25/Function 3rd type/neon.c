//neon no. 3rd type
#include<stdio.h>
int neo();
void main()
{
   if(neo()==1)
    printf(" is neon no");
   else
     printf(" is not  neon no");
}
int neo()
{
    int n,rem,s=0,sq;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(sq=n*n;sq>0;sq=sq/10)
    {
        rem=sq%10;
        s=s+rem;
    }
    printf("%d",n);
    if(s==n)
     return 1;
    else
     return 0;
}