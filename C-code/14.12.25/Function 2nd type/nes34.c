///question no 34 2nd type
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
    for(i=n;i>=1;i--)
    {
        for(sp=i;sp<=n-1;sp++)
        {
            printf(" - ");
        }
        for(j=(2*i)-1;j>=1;j--)
        {
            printf(" * ");
        }
        printf("\n");
    }
}