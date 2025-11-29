//Disariyam no
#include<stdio.h>
#include<math.h>
void main()
{
    int n,x,c=0,p,rem,s=0;
    printf("Enter the no =");
    scanf("%d",&n);
    for(x=n;n>0;n/=10)
    {
        c++;
    }

    for(n=x;n>0;n/=10)
    {
        rem=n%10;
        p=pow(rem,c);
        s+=p;
        c--;
    }
    printf("\n%d\n",p);
    if (x==s)
     printf("%d is Disariyam no",x);
    else
     printf("%d is not Disariyam no",x);
}