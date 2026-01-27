///question no 42 2nd type
#include<stdio.h>
void nes(int);
void main()
{
    int n;
     printf("Enter the range =");
    scanf("%d",&n);
    nes(n);
}
void nes( int n)
{
    int i,j,sp,k=1,p;
    for(i=1;i<=n;i++)
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