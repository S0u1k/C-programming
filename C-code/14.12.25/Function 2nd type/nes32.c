///question no 32 2nd type
#include<stdio.h>
void nes(int);
void main()
{
    int n;
    printf("Enter the range =");
    scanf("%d",&n);
    nes(n);
}
void nes(int n)
{
    int i,j,sp;
    for(i=1;i<=n;i++)
    {
        for(sp=n-1;sp>=i;sp--)
        {
            printf(" - ");
        }
        for(j=1;j<=i;j++)
        {
            printf(" %d ",j);
        }
        for(j=i-1;j>=1;j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}