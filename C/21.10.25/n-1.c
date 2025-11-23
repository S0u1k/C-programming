//WAP to print n-1 by using while loop
#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the Range = ");
    scanf("%d",&n);
    i=n;
    while(i>=1)
    {
        printf("%d ",i);
        i--;
    }   
}