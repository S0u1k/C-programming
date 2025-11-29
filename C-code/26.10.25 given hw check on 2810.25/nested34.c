///question no 34
#include<stdio.h>
void main()
{
    int i,j,sp;
    for(i=4;i>=1;i--)
    {
        for(sp=i;sp<=3;sp++)
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