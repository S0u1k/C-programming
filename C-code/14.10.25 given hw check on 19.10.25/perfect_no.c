//WAP to check whether a no. is perfect or not
/*
    6,28,496   
    6-->  1,2,3   1+2+3=6  sum of factor
    28-->1+2+4+7+14=28
*/
#include<stdio.h>
void main()
{
    int i,n,s=0;
    printf("Enter the No. = ");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
       if(n%i==0)
           s=s+i;
    }
    if(s==n)
      printf("%d is Perfect No. ",n);
    else
      printf("%d is NOT Perfect No. ",n);
}