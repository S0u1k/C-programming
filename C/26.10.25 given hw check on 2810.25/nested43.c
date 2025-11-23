//question no 43
#include<stdio.h>
void main()
{
    int i,j,sp,k=4;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        for(sp=1;sp<=2*k;sp++)
        {
           printf("-");
        }
        k--;
        for(j=i;j>=1;j--)
        {
            printf("%d",j);
        }
     printf("\n");
    }
}