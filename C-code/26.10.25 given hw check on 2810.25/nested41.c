///question no 41
#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=1;i<=5;i++)
    {
        for(sp=4;sp>=i;sp--)
        {
            printf(" - ");
        }
        for(j=i;j>=1;j--)
        {
            printf(" %d ",j);
        }
        printf("\n");
    }
}