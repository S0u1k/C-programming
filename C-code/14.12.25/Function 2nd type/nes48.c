//question  no 48 2nd type
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
    int i,j;
    for(i=65;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            printf("%c ",j);
        }
        printf("\n");
    }
}