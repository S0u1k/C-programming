///question no 38
#include<stdio.h>
void main()
{
    int i,j,k=1;
    for(i=1;i<=5;i++)
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