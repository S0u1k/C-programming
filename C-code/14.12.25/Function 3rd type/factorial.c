//WAP to calc. factorial of a no. by using func. 3rd type
#include<stdio.h>
int fact();
void main()
{
    //for(int i=1;i<=10;i++)
    printf("The factorial = %d",fact());
}
int fact()
{
    int i,n,f=1;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}