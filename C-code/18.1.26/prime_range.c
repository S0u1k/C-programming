//prime range
#include<stdio.h>
void primerange();
void main()
{
    primerange();
}
void primerange()
{
    int  n,m,i,f,s=0;
    printf("Enter the 2 no for lower and upper range = ");
    scanf("%d%d",&n,&m);
    printf("Prime No between %d & %d is = ",n,m);
    while(n<=m )
    {
        if(n < 2)   // skip 0 and 1
        {
            ++n;
            continue;
        }
        f=0;
        for(i=2;i<=n/2;i++)
        {
            if(n%i==0)
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            printf("%d ",n);
            s+=n;
        }
        ++n;
    }
    printf("\nSum = %d",s);
}