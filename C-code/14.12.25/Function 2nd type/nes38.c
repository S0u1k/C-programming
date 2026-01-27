///question no 38 2nd type
#include<stdio.h>
void nes(int );
void main()
{
    int n;
    printf("Enter the range =");
    scanf("%d",&n);
    nes(n);
}
void nes(int n)
{
    int i,j,k=1;
    for(i=1;i<=n;i++)
    {
        k=i;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k);
            k=k+5-j;
        }
        printf("\n");
    }
}