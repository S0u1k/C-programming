//WAP to print 1-n by using while loop
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d ",i);
        i++;
    }   
}