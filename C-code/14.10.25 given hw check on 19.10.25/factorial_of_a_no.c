//WAP to calc. the factorial of a no.
#include<stdio.h>
void main()
{
    int i,n,f=1;
    printf("Enter the No. = ");
    scanf("%d",&n);
    if(n<0)
      printf("-ve No. factorial can't be possible");
    else
    {
    for(i=1;i<=n;i++)
    {
        f=f*i;
    //    printf("Factorial of %d is %d\n",i,f);
    }
    printf("Factorial of %d is %d",n,f);
    }
}