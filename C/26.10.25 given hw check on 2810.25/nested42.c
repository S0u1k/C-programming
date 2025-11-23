///question no 42
#include<stdio.h>
void main()
{
    int i,j,sp,k=1,p;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf(" %d ",k);
            k++;
        }
        p=k;
        p-=2;
        for(j=i-1;j>=1;j--)
        {
            printf(" %d ",p);
            p--;
        }
        printf("\n");
    }
}